
/* 
 * Copyright (c) 2017, NVIDIA CORPORATION.  All rights reserved.
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
#include "mth_avx512helper.h"
#endif
#include "dasin_defs.h"

extern "C" __m512d FCN_AVX512(__fvd_asin_fma3)(__m512d);

__m512d FCN_AVX512(__fvd_asin_fma3)(__m512d const a)
{
    __m512i const ABS_MASK  = _mm512_set1_epi64(ABS_MASK_LL);
    __m512d const ZERO      = _mm512_set1_pd(0.0);
    __m512d const ONE       = _mm512_set1_pd(1.0);
    __m512d const SGN_MASK  = (__m512d)_mm512_set1_epi64(SGN_MASK_LL);
    __m512d const THRESHOLD = (__m512d)_mm512_set1_epi64(THRESHOLD_LL);
    __m512d const PIO2_HI   = _mm512_set1_pd(PIO2_HI_D);
    __m512d const PIO2_LO   = _mm512_set1_pd(PIO2_LO_D);

    __m512d const A0 = _mm512_set1_pd(A0_D);
    __m512d const B0 = _mm512_set1_pd(B0_D);
    __m512d const C0 = _mm512_set1_pd(C0_D);
    __m512d const D0 = _mm512_set1_pd(D0_D);
    __m512d const E0 = _mm512_set1_pd(E0_D);
    __m512d const F0 = _mm512_set1_pd(F0_D);
    __m512d const G0 = _mm512_set1_pd(G0_D);
    __m512d const H0 = _mm512_set1_pd(H0_D);
    __m512d const I0 = _mm512_set1_pd(I0_D);
    __m512d const J0 = _mm512_set1_pd(J0_D);
    __m512d const K0 = _mm512_set1_pd(K0_D);
    __m512d const L0 = _mm512_set1_pd(L0_D);
    __m512d const M0 = _mm512_set1_pd(M0_D);

    __m512d const A1 = _mm512_set1_pd(A1_D);
    __m512d const B1 = _mm512_set1_pd(B1_D);
    __m512d const C1 = _mm512_set1_pd(C1_D);
    __m512d const D1 = _mm512_set1_pd(D1_D);
    __m512d const E1 = _mm512_set1_pd(E1_D);
    __m512d const F1 = _mm512_set1_pd(F1_D);
    __m512d const G1 = _mm512_set1_pd(G1_D);
    __m512d const H1 = _mm512_set1_pd(H1_D);
    __m512d const I1 = _mm512_set1_pd(I1_D);
    __m512d const J1 = _mm512_set1_pd(J1_D);
    __m512d const K1 = _mm512_set1_pd(K1_D);
    __m512d const L1 = _mm512_set1_pd(L1_D);

    __m512d x, x2, x3, x6, x12, x15;
    __m512d sq, p0hi, p0lo, p0, p1hi, p1lo, p1;
    __m512d res, cmp, sign, fix, pio2_lo, pio2_hi;

    x  = _MM512_AND_PD(a, (__m512d)ABS_MASK);
    sq = _mm512_sub_pd(ONE, x);
    sq = _mm512_sqrt_pd(sq);

    x2 = _mm512_mul_pd(a, a);
    p1hi = _mm512_fmadd_pd(A1, x, B1);
    p1lo = _mm512_fmadd_pd(G1, x, H1);

    p0hi = _mm512_fmadd_pd(A0, x2, B0);
    p0lo = _mm512_fmadd_pd(H0, x2, I0);
    p1hi = _mm512_fmadd_pd(p1hi, x, C1);
    p1lo = _mm512_fmadd_pd(p1lo, x, I1);

    p0hi = _mm512_fmadd_pd(p0hi, x2, C0);
    p0lo = _mm512_fmadd_pd(p0lo, x2, J0);
    p1hi = _mm512_fmadd_pd(p1hi, x, D1);
    p1lo = _mm512_fmadd_pd(p1lo, x, J1);

    p0hi = _mm512_fmadd_pd(p0hi, x2, D0);
    p0lo = _mm512_fmadd_pd(p0lo, x2, K0);
    fix = _MM512_CMP_PD(a, ONE, _CMP_GT_OQ);
    x3 = _mm512_mul_pd(x2, x);
    p1hi = _mm512_fmadd_pd(p1hi, x, E1);
    p1lo = _mm512_fmadd_pd(p1lo, x, K1);

    p0hi = _mm512_fmadd_pd(p0hi, x2, E0);
    p0lo = _mm512_fmadd_pd(p0lo, x2, L0);
    sign = _MM512_AND_PD(a, SGN_MASK);
    fix = _MM512_AND_PD(fix, SGN_MASK);
    x6 = _mm512_mul_pd(x3, x3);
    p1hi = _mm512_fmadd_pd(p1hi, x, F1);
    p1lo = _mm512_fmadd_pd(p1lo, x, L1);

    x12 = _mm512_mul_pd(x6, x6);
    p0hi = _mm512_fmadd_pd(p0hi, x2, F0);
    p0lo = _mm512_fmadd_pd(p0lo, x2, M0);
    fix = _MM512_XOR_PD(fix, sign);
    p1 = _mm512_fmadd_pd(p1hi, x6, p1lo);

    x15 = _mm512_mul_pd(x12, x3);
    p0hi = _mm512_fmadd_pd(p0hi, x2, G0);
    p0lo = _mm512_fmadd_pd(p0lo, x3, x);

    p0 = _mm512_fmadd_pd(p0hi, x15, p0lo);
    p1 = _mm512_fmadd_pd(sq, p1, PIO2_LO);

    cmp = _MM512_CMP_PD(x, THRESHOLD, _CMP_LT_OQ);
    p1 = _mm512_add_pd(p1, PIO2_HI);

    res = _MM512_BLENDV_PD(p1, p0, cmp);
    res = _MM512_XOR_PD(res, fix);

    return res;
}
