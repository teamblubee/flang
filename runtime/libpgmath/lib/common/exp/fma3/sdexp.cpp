
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
#include "xmm2altivec.h"
#include <math.h>
#elif defined(TARGET_LINUX_ARM64) || defined(TARGET_FREEBSD_ARM64)
#include "arm64intrin.h"
#include <math.h>
#else
#include <immintrin.h>
#endif
#include "dexp_defs.h"
#include <stdio.h>

extern "C" double __fsd_exp_fma3(double);


// handles large cases as well as special cases such as infinities and NaNs
__m128d __pgm_exp_d_slowpath(__m128d const a, __m128i const i, __m128d const t,  __m128d const z)
{
    __m128d const INF        = (__m128d)_mm_set1_epi64x(INF_D);
    __m128d const ZERO       = _mm_set1_pd(ZERO_D);
    __m128i const HI_ABS_MASK = _mm_set1_epi64x(HI_ABS_MASK_D);
    __m128d const UPPERBOUND_1 = (__m128d)_mm_set1_epi64x(UPPERBOUND_1_D);
    __m128d const UPPERBOUND_2 = (__m128d)_mm_set1_epi64x(UPPERBOUND_2_D);
    __m128i const MULT_CONST = _mm_set1_epi64x(MULT_CONST_D);

    __m128d abs_lt = (__m128d)_mm_and_si128((__m128i)a, HI_ABS_MASK);                    

    __m128d slowpath_mask = (__m128d)_mm_cmp_sd(abs_lt, UPPERBOUND_1, _CMP_LT_OS);       
    __m128d lt_zero_mask = _mm_cmp_sd(a, ZERO, _CMP_LT_OS); // compute a < 0.0           

    __m128d a_plus_inf = _mm_add_sd(a, INF); // check if a is too big           
    __m128d zero_inf_blend = _mm_blendv_pd(a_plus_inf, ZERO, lt_zero_mask);     

    __m128d accurate_scale_mask = (__m128d)_mm_cmp_sd(abs_lt, UPPERBOUND_2, _CMP_LT_OS); 

    // compute accurate scale
    __m128i k = _mm_srli_epi64(i, 1); // k = i / 2                              
    __m128i i_scale_acc = _mm_slli_epi64(k, SCALE_D);  // shift to HI and shift 20   

    k = _mm_sub_epi32(i, k);          // k = i - k                              
    __m128i i_scale_acc_2 = _mm_slli_epi64(k, SCALE_D);  // shift to HI and shift 20 
    __m128d multiplier = (__m128d)_mm_add_epi64(i_scale_acc_2, MULT_CONST);     

    __m128d res = (__m128d)_mm_add_epi32(i_scale_acc, (__m128i)t);              
    res = _mm_mul_sd(res, multiplier);                                          

    __m128d slowpath_blend = _mm_blendv_pd(zero_inf_blend, res, accurate_scale_mask); 
    return  _mm_blendv_pd(slowpath_blend, z, slowpath_mask);
}


double __fsd_exp_fma3(double const a_in)
{
    __m128d const L2E        = _mm_set1_pd(L2E_D);
    __m128d const NEG_LN2_HI = _mm_set1_pd(NEG_LN2_HI_D);
    __m128d const NEG_LN2_LO = _mm_set1_pd(NEG_LN2_LO_D);
    __m128d const ZERO       = _mm_set1_pd(ZERO_D);
    __m128d const INF        = (__m128d)_mm_set1_epi64x(INF_D);

    __m128d const EXP_POLY_11 = _mm_set1_pd(EXP_POLY_11_D);
    __m128d const EXP_POLY_10 = _mm_set1_pd(EXP_POLY_10_D);
    __m128d const EXP_POLY_9  = _mm_set1_pd(EXP_POLY_9_D);
    __m128d const EXP_POLY_8  = _mm_set1_pd(EXP_POLY_8_D);
    __m128d const EXP_POLY_7  = _mm_set1_pd(EXP_POLY_7_D);
    __m128d const EXP_POLY_6  = _mm_set1_pd(EXP_POLY_6_D);
    __m128d const EXP_POLY_5  = _mm_set1_pd(EXP_POLY_5_D);
    __m128d const EXP_POLY_4  = _mm_set1_pd(EXP_POLY_4_D);
    __m128d const EXP_POLY_3  = _mm_set1_pd(EXP_POLY_3_D);
    __m128d const EXP_POLY_2  = _mm_set1_pd(EXP_POLY_2_D);
    __m128d const EXP_POLY_1  = _mm_set1_pd(EXP_POLY_1_D);
    __m128d const EXP_POLY_0  = _mm_set1_pd(EXP_POLY_0_D);

    __m128d const DBL2INT_CVT = _mm_set1_pd(DBL2INT_CVT_D);
    __m128d const UPPERBOUND_1 = (__m128d)_mm_set1_epi64x(UPPERBOUND_1_D);
    __m128d const UPPERBOUND_2 = (__m128d)_mm_set1_epi64x(UPPERBOUND_2_D);

    __m128i const MULT_CONST = _mm_set1_epi64x(MULT_CONST_D);
    __m128i const HI_ABS_MASK = _mm_set1_epi64x(HI_ABS_MASK_D);

    __m128d a = _mm_set1_pd(a_in);
    // calculating exponent; stored in the LO of each 64-bit block
    __m128i i = (__m128i) _mm_fmadd_sd(a, L2E, DBL2INT_CVT);

    // calculate mantissa
    //fast mul rint
    __m128d t = _mm_sub_sd (_mm_fmadd_sd(a, L2E, DBL2INT_CVT), DBL2INT_CVT);
    __m128d m = _mm_fmadd_sd (t, NEG_LN2_HI, a);
    m = _mm_fmadd_sd (t, NEG_LN2_LO, m);

    // evaluate highest 8 terms of polynomial with estrin, then switch to horner
    __m128d z10 = _mm_fmadd_sd(EXP_POLY_11, m, EXP_POLY_10);
    __m128d z8  = _mm_fmadd_sd(EXP_POLY_9, m, EXP_POLY_8);
    __m128d z6  = _mm_fmadd_sd(EXP_POLY_7, m, EXP_POLY_6);
    __m128d z4  = _mm_fmadd_sd(EXP_POLY_5, m, EXP_POLY_4);

    __m128d m2 = _mm_mul_sd(m, m);
    z8 = _mm_fmadd_sd(z10, m2, z8);
    z4 = _mm_fmadd_sd(z6, m2, z4); 
    
    __m128d m4 = _mm_mul_sd(m2, m2);
    z4 = _mm_fmadd_sd(z8, m4, z4);

    t = _mm_fmadd_sd(z4, m, EXP_POLY_3);
    t = _mm_fmadd_sd(t, m, EXP_POLY_2);
    t = _mm_fmadd_sd(t, m, EXP_POLY_1);
    t = _mm_fmadd_sd(t, m, EXP_POLY_0);
    
    // fast scale
    __m128i i_scale = _mm_slli_epi64(i, SCALE_D); 
    __m128d z = (__m128d)_mm_add_epi32(i_scale, (__m128i)t); 

    __m128d abs_a = (__m128d)_mm_and_si128((__m128i)a, HI_ABS_MASK);

#if defined(TARGET_LINUX_POWER) || defined(TARGET_FREEBSD_POWER)
    int exp_slowmask = _vec_any_nz((__m128i)_mm_cmpgt_epi64((__m128i)abs_a, (__m128i)UPPERBOUND_1));
#else
    int exp_slowmask = _mm_movemask_epi8(_mm_cmpgt_epi64((__m128i)abs_a, (__m128i)UPPERBOUND_1));
#endif

//    if (exp_slowmask) {
//        return _mm_cvtsd_f64(__pgm_exp_d_slowpath(a, i, t, z));
//    }

//    int exp_slowmask = _mm_movemask_pd(_mm_cmp_sd(abs_a, UPPERBOUND_1, _CMP_GE_OS));
    
      if (__builtin_expect(exp_slowmask, 0)) {
        return _mm_cvtsd_f64(__pgm_exp_d_slowpath(a, i, t, z));
      }

      return _mm_cvtsd_f64(z);
} 
