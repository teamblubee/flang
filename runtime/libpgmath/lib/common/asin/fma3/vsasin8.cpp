
/* 
 * Copyright (c) 2017-2018, NVIDIA CORPORATION.  All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */


#if defined(TARGET_LINUX_POWER) || defined(TARGET_FREEBSD_POWER)
#error "Source cannot be compiled for POWER architectures"
#include "xmm2altivec.h"
#else
#include <immintrin.h>
#endif
#include "asin_defs.h"

//#define INTEL_NAN

extern "C" __m256 __fvs_asin_fma3_256(__m256 const a);

__m256 __fvs_asin_fma3_256(__m256 const a) {
    __m256  const ABS_MASK  = (__m256)_mm256_set1_epi32(ABS_MASK_I);
    __m256  const SGN_MASK  = (__m256)_mm256_set1_epi32(SGN_MASK_I);
    __m256  const ONE       = _mm256_set1_ps(ONE_F);
    __m256i const THRESHOLD = (__m256i)_mm256_set1_ps(THRESHOLD_F);
    __m256  const PIO2      = _mm256_set1_ps(PIO2_F);

    // p0 coefficients
    __m256 const A0 = _mm256_set1_ps(A0_F);
    __m256 const B0 = _mm256_set1_ps(B0_F);
    __m256 const C0 = _mm256_set1_ps(C0_F);
    __m256 const D0 = _mm256_set1_ps(D0_F);
    __m256 const E0 = _mm256_set1_ps(E0_F);

    // p1 coefficients
    __m256 const A1 = _mm256_set1_ps(A1_F);
    __m256 const B1 = _mm256_set1_ps(B1_F);
    __m256 const C1 = _mm256_set1_ps(C1_F);
    __m256 const D1 = _mm256_set1_ps(D1_F);
    __m256 const E1 = _mm256_set1_ps(E1_F);
    __m256 const F1 = _mm256_set1_ps(F1_F);
    __m256 const G1 = _mm256_set1_ps(G1_F);

    __m256 x, x2, x3, sq, p0, p1, res, cmp0;

    x = _mm256_and_ps(ABS_MASK, a);
    sq = _mm256_sub_ps(ONE, x);
    sq = _mm256_sqrt_ps(sq); // sqrt(1 - |a|)

    // sgn(a) * ( |a| > 0.5705 ? pi/2 - sqrt(1 - |x|) * p1(|a|) : p0(|a|) )
    cmp0 = (__m256)_mm256_cmpgt_epi32((__m256i)x, THRESHOLD);

    // polynomials evaluation
    x2 = _mm256_mul_ps(a, a);
    p1 = _mm256_fmadd_ps(A1, x, B1);
    p0 = _mm256_fmadd_ps(A0, x2, B0);
    p1 = _mm256_fmadd_ps(p1, x, C1);
    p0 = _mm256_fmadd_ps(p0, x2, C0);
    p1 = _mm256_fmadd_ps(p1, x, D1);
    x3 = _mm256_mul_ps(x2, x);
    p0 = _mm256_fmadd_ps(p0, x2, D0);
    p1 = _mm256_fmadd_ps(p1, x, E1);
    p0 = _mm256_fmadd_ps(p0, x2, E0);
    p1 = _mm256_fmadd_ps(p1, x, F1);
    p1 = _mm256_fmadd_ps(p1, x, G1);
    p0 = _mm256_fmadd_ps(p0, x3, x);

    p1 = _mm256_fmadd_ps(sq, p1, PIO2);
    res = _mm256_blendv_ps(p0, p1, cmp0);

#ifndef INTEL_NAN // GCC NAN:
    __m256 sign, fix;
    sign = _mm256_and_ps(a, SGN_MASK);
    fix = _mm256_cmp_ps(a, ONE, _CMP_GT_OQ);
    fix = _mm256_and_ps(fix, SGN_MASK);
    fix = _mm256_xor_ps(fix, sign);
    res = _mm256_xor_ps(res, fix);
#else // INTEL NAN:
    __m256 sign;
    sign = _mm256_and_ps(a, SGN_MASK);
    res = _mm256_or_ps(res, sign);
#endif

    return res;
}
