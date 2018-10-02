/* ============================================================
Copyright (c) 2002-2015 Advanced Micro Devices, Inc.

All rights reserved.

Redistribution and  use in source and binary  forms, with or
without  modification,  are   permitted  provided  that  the
following conditions are met:

+ Redistributions  of source  code  must  retain  the  above
  copyright  notice,   this  list  of   conditions  and  the
  following disclaimer.

+ Redistributions  in binary  form must reproduce  the above
  copyright  notice,   this  list  of   conditions  and  the
  following  disclaimer in  the  documentation and/or  other
  materials provided with the distribution.

+ Neither the  name of Advanced Micro Devices,  Inc. nor the
  names  of  its contributors  may  be  used  to endorse  or
  promote  products  derived   from  this  software  without
  specific prior written permission.

THIS  SOFTWARE  IS PROVIDED  BY  THE  COPYRIGHT HOLDERS  AND
CONTRIBUTORS "AS IS" AND  ANY EXPRESS OR IMPLIED WARRANTIES,
INCLUDING,  BUT NOT  LIMITED TO,  THE IMPLIED  WARRANTIES OF
MERCHANTABILITY  AND FITNESS  FOR A  PARTICULAR  PURPOSE ARE
DISCLAIMED.  IN  NO  EVENT  SHALL  ADVANCED  MICRO  DEVICES,
INC.  OR CONTRIBUTORS  BE LIABLE  FOR ANY  DIRECT, INDIRECT,
INCIDENTAL,  SPECIAL,  EXEMPLARY,  OR CONSEQUENTIAL  DAMAGES
(INCLUDING,  BUT NOT LIMITED  TO, PROCUREMENT  OF SUBSTITUTE
GOODS  OR  SERVICES;  LOSS  OF  USE, DATA,  OR  PROFITS;  OR
BUSINESS INTERRUPTION)  HOWEVER CAUSED AND ON  ANY THEORY OF
LIABILITY,  WHETHER IN CONTRACT,  STRICT LIABILITY,  OR TORT
(INCLUDING NEGLIGENCE  OR OTHERWISE) ARISING IN  ANY WAY OUT
OF  THE  USE  OF  THIS  SOFTWARE, EVEN  IF  ADVISED  OF  THE
POSSIBILITY OF SUCH DAMAGE.

It is  licensee's responsibility  to comply with  any export
regulations applicable in licensee's jurisdiction.
============================================================ */
#include "libm_amd.h"
#include "libm_util_amd.h"

#define USE_NAN_WITH_FLAGS
#define USE_INFINITY_WITH_FLAGS
#define USE_HANDLE_ERROR
#include "libm_inlines_amd.h"
#undef USE_NAN_WITH_FLAGS
#undef USE_INFINITY_WITH_FLAGS
#undef USE_HANDLE_ERROR

#include "libm_errno_amd.h"

/* Deal with errno for out-of-range result */
static inline double
retval_errno_erange_overflow(double x __attribute__((unused)))
{
  return -infinity_with_flags(AMD_F_DIVBYZERO);
}

/* Deal with errno for out-of-range argument */
static inline double
retval_errno_edom(double x __attribute__((unused)))
{
  return nan_with_flags(AMD_F_INVALID);
}

#undef _FUNCNAME
#if defined(COMPILING_LOG10)
#define _FUNCNAME "log10"
double FN_PROTOTYPE(mth_i_dlog10)(double x)
#elif defined(COMPILING_LOG2)
#define _FUNCNAME "log2"
double FN_PROTOTYPE(mth_i_dlog2)(double x)
#else
#define _FUNCNAME "log"
double FN_PROTOTYPE(mth_i_dlog)(double x)
#endif
{

  int expadjust, xexp;
  double r, r1, r2, correction, f, f1, f2, q, u, v, z1, z2, poly;
  int index;
  __UINT8_T ux;
#if defined(COMPILING_LOG10) || defined(COMPILING_LOG2)
  __UINT8_T ut;
#endif

  /*
    Computes natural log(x). Algorithm based on:
    Ping-Tak Peter Tang
    "Table-driven implementation of the logarithm function in IEEE
    floating-point arithmetic"
    ACM Transactions on Mathematical Software (TOMS)
    Volume 16, Issue 4 (December 1990)
  */

  /* Arrays ln_lead_table and ln_tail_table contain
     leading and trailing parts respectively of precomputed
     values of natural log(1+i/64), for i = 0, 1, ..., 64.
     ln_lead_table contains the first 24 bits of precision,
     and ln_tail_table contains a further 53 bits precision. */

  static const double ln_lead_table[65] = {
      0.00000000000000000000e+00,  /* 0x0000000000000000 */
      1.55041813850402832031e-02,  /* 0x3f8fc0a800000000 */
      3.07716131210327148438e-02,  /* 0x3f9f829800000000 */
      4.58095073699951171875e-02,  /* 0x3fa7745800000000 */
      6.06245994567871093750e-02,  /* 0x3faf0a3000000000 */
      7.52233862876892089844e-02,  /* 0x3fb341d700000000 */
      8.96121263504028320312e-02,  /* 0x3fb6f0d200000000 */
      1.03796780109405517578e-01,  /* 0x3fba926d00000000 */
      1.17783010005950927734e-01,  /* 0x3fbe270700000000 */
      1.31576299667358398438e-01,  /* 0x3fc0d77e00000000 */
      1.45181953907012939453e-01,  /* 0x3fc2955280000000 */
      1.58604979515075683594e-01,  /* 0x3fc44d2b00000000 */
      1.71850204467773437500e-01,  /* 0x3fc5ff3000000000 */
      1.84922337532043457031e-01,  /* 0x3fc7ab8900000000 */
      1.97825729846954345703e-01,  /* 0x3fc9525a80000000 */
      2.10564732551574707031e-01,  /* 0x3fcaf3c900000000 */
      2.23143517971038818359e-01,  /* 0x3fcc8ff780000000 */
      2.35566020011901855469e-01,  /* 0x3fce270700000000 */
      2.47836112976074218750e-01,  /* 0x3fcfb91800000000 */
      2.59957492351531982422e-01,  /* 0x3fd0a324c0000000 */
      2.71933674812316894531e-01,  /* 0x3fd1675c80000000 */
      2.83768117427825927734e-01,  /* 0x3fd22941c0000000 */
      2.95464158058166503906e-01,  /* 0x3fd2e8e280000000 */
      3.07025015354156494141e-01,  /* 0x3fd3a64c40000000 */
      3.18453729152679443359e-01,  /* 0x3fd4618bc0000000 */
      3.29753279685974121094e-01,  /* 0x3fd51aad80000000 */
      3.40926527976989746094e-01,  /* 0x3fd5d1bd80000000 */
      3.51976394653320312500e-01,  /* 0x3fd686c800000000 */
      3.62905442714691162109e-01,  /* 0x3fd739d7c0000000 */
      3.73716354370117187500e-01,  /* 0x3fd7eaf800000000 */
      3.84411692619323730469e-01,  /* 0x3fd89a3380000000 */
      3.94993782043457031250e-01,  /* 0x3fd9479400000000 */
      4.05465066432952880859e-01,  /* 0x3fd9f323c0000000 */
      4.15827870368957519531e-01,  /* 0x3fda9cec80000000 */
      4.26084339618682861328e-01,  /* 0x3fdb44f740000000 */
      4.36236739158630371094e-01,  /* 0x3fdbeb4d80000000 */
      4.46287095546722412109e-01,  /* 0x3fdc8ff7c0000000 */
      4.56237375736236572266e-01,  /* 0x3fdd32fe40000000 */
      4.66089725494384765625e-01,  /* 0x3fddd46a00000000 */
      4.75845873355865478516e-01,  /* 0x3fde744240000000 */
      4.85507786273956298828e-01,  /* 0x3fdf128f40000000 */
      4.95077252388000488281e-01,  /* 0x3fdfaf5880000000 */
      5.04556000232696533203e-01,  /* 0x3fe02552a0000000 */
      5.13945698738098144531e-01,  /* 0x3fe0723e40000000 */
      5.23248136043548583984e-01,  /* 0x3fe0be72e0000000 */
      5.32464742660522460938e-01,  /* 0x3fe109f380000000 */
      5.41597247123718261719e-01,  /* 0x3fe154c3c0000000 */
      5.50647079944610595703e-01,  /* 0x3fe19ee6a0000000 */
      5.59615731239318847656e-01,  /* 0x3fe1e85f40000000 */
      5.68504691123962402344e-01,  /* 0x3fe23130c0000000 */
      5.77315330505371093750e-01,  /* 0x3fe2795e00000000 */
      5.86049020290374755859e-01,  /* 0x3fe2c0e9e0000000 */
      5.94707071781158447266e-01,  /* 0x3fe307d720000000 */
      6.03290796279907226562e-01,  /* 0x3fe34e2880000000 */
      6.11801505088806152344e-01,  /* 0x3fe393e0c0000000 */
      6.20240390300750732422e-01,  /* 0x3fe3d90260000000 */
      6.28608644008636474609e-01,  /* 0x3fe41d8fe0000000 */
      6.36907458305358886719e-01,  /* 0x3fe4618bc0000000 */
      6.45137906074523925781e-01,  /* 0x3fe4a4f840000000 */
      6.53301239013671875000e-01,  /* 0x3fe4e7d800000000 */
      6.61398470401763916016e-01,  /* 0x3fe52a2d20000000 */
      6.69430613517761230469e-01,  /* 0x3fe56bf9c0000000 */
      6.77398800849914550781e-01,  /* 0x3fe5ad4040000000 */
      6.85303986072540283203e-01,  /* 0x3fe5ee02a0000000 */
      6.93147122859954833984e-01}; /* 0x3fe62e42e0000000 */

  static const double ln_tail_table[65] = {
      0.00000000000000000000e+00,  /* 0x0000000000000000 */
      5.15092497094772879206e-09,  /* 0x3e361f807c79f3db */
      4.55457209735272790188e-08,  /* 0x3e6873c1980267c8 */
      2.86612990859791781788e-08,  /* 0x3e5ec65b9f88c69e */
      2.23596477332056055352e-08,  /* 0x3e58022c54cc2f99 */
      3.49498983167142274770e-08,  /* 0x3e62c37a3a125330 */
      3.23392843005887000414e-08,  /* 0x3e615cad69737c93 */
      1.35722380472479366661e-08,  /* 0x3e4d256ab1b285e9 */
      2.56504325268044191098e-08,  /* 0x3e5b8abcb97a7aa2 */
      5.81213608741512136843e-08,  /* 0x3e6f34239659a5dc */
      5.59374849578288093334e-08,  /* 0x3e6e07fd48d30177 */
      5.06615629004996189970e-08,  /* 0x3e6b32df4799f4f6 */
      5.24588857848400955725e-08,  /* 0x3e6c29e4f4f21cf8 */
      9.61968535632653505972e-10,  /* 0x3e1086c848df1b59 */
      1.34829655346594463137e-08,  /* 0x3e4cf456b4764130 */
      3.65557749306383026498e-08,  /* 0x3e63a02ffcb63398 */
      3.33431709374069198903e-08,  /* 0x3e61e6a6886b0976 */
      5.13008650536088382197e-08,  /* 0x3e6b8abcb97a7aa2 */
      5.09285070380306053751e-08,  /* 0x3e6b578f8aa35552 */
      3.20853940845502057341e-08,  /* 0x3e6139c871afb9fc */
      4.06713248643004200446e-08,  /* 0x3e65d5d30701ce64 */
      5.57028186706125221168e-08,  /* 0x3e6de7bcb2d12142 */
      5.48356693724804282546e-08,  /* 0x3e6d708e984e1664 */
      1.99407553679345001938e-08,  /* 0x3e556945e9c72f36 */
      1.96585517245087232086e-09,  /* 0x3e20e2f613e85bda */
      6.68649386072067321503e-09,  /* 0x3e3cb7e0b42724f6 */
      5.89936034642113390002e-08,  /* 0x3e6fac04e52846c7 */
      2.85038578721554472484e-08,  /* 0x3e5e9b14aec442be */
      5.09746772910284482606e-08,  /* 0x3e6b5de8034e7126 */
      5.54234668933210171467e-08,  /* 0x3e6dc157e1b259d3 */
      6.29100830926604004874e-09,  /* 0x3e3b05096ad69c62 */
      2.61974119468563937716e-08,  /* 0x3e5c2116faba4cdd */
      4.16752115011186398935e-08,  /* 0x3e665fcc25f95b47 */
      2.47747534460820790327e-08,  /* 0x3e5a9a08498d4850 */
      5.56922172017964209793e-08,  /* 0x3e6de647b1465f77 */
      2.76162876992552906035e-08,  /* 0x3e5da71b7bf7861d */
      7.08169709942321478061e-09,  /* 0x3e3e6a6886b09760 */
      5.77453510221151779025e-08,  /* 0x3e6f0075eab0ef64 */
      4.43021445893361960146e-09,  /* 0x3e33071282fb989b */
      3.15140984357495864573e-08,  /* 0x3e60eb43c3f1bed2 */
      2.95077445089736670973e-08,  /* 0x3e5faf06ecb35c84 */
      1.44098510263167149349e-08,  /* 0x3e4ef1e63db35f68 */
      1.05196987538551827693e-08,  /* 0x3e469743fb1a71a5 */
      5.23641361722697546261e-08,  /* 0x3e6c1cdf404e5796 */
      7.72099925253243069458e-09,  /* 0x3e4094aa0ada625e */
      5.62089493829364197156e-08,  /* 0x3e6e2d4c96fde3ec */
      3.53090261098577946927e-08,  /* 0x3e62f4d5e9a98f34 */
      3.80080516835568242269e-08,  /* 0x3e6467c96ecc5cbe */
      5.66961038386146408282e-08,  /* 0x3e6e7040d03dec5a */
      4.42287063097349852717e-08,  /* 0x3e67bebf4282de36 */
      3.45294525105681104660e-08,  /* 0x3e6289b11aeb783f */
      2.47132034530447431509e-08,  /* 0x3e5a891d1772f538 */
      3.59655343422487209774e-08,  /* 0x3e634f10be1fb591 */
      5.51581770357780862071e-08,  /* 0x3e6d9ce1d316eb93 */
      3.60171867511861372793e-08,  /* 0x3e63562a19a9c442 */
      1.94511067964296180547e-08,  /* 0x3e54e2adf548084c */
      1.54137376631349347838e-08,  /* 0x3e508ce55cc8c97a */
      3.93171034490174464173e-09,  /* 0x3e30e2f613e85bda */
      5.52990607758839766440e-08,  /* 0x3e6db03ebb0227bf */
      3.29990737637586136511e-08,  /* 0x3e61b75bb09cb098 */
      1.18436010922446096216e-08,  /* 0x3e496f16abb9df22 */
      4.04248680368301346709e-08,  /* 0x3e65b3f399411c62 */
      2.27418915900284316293e-08,  /* 0x3e586b3e59f65355 */
      1.70263791333409206020e-08,  /* 0x3e52482ceae1ac12 */
      5.76999904754328540596e-08}; /* 0x3e6efa39ef35793c */

#ifndef COMPILING_LOG2
  /* log2_lead and log2_tail sum to an extra-precise version
     of log(2) */
  static const double log2_lead =
                          6.93147122859954833984e-01, /* 0x3fe62e42e0000000 */
      log2_tail = 5.76999904754328540596e-08;         /* 0x3e6efa39ef35793c */
#endif

  static const double
      /* Approximating polynomial coefficients for x near 1.0 */
      ca_1 = 8.33333333333317923934e-02, /* 0x3fb55555555554e6 */
      ca_2 = 1.25000000037717509602e-02, /* 0x3f89999999bac6d4 */
      ca_3 = 2.23213998791944806202e-03, /* 0x3f62492307f1519f */
      ca_4 = 4.34887777707614552256e-04, /* 0x3f3c8034c85dfff0 */

      /* Approximating polynomial coefficients for other x */
      cb_1 = 8.33333333333333593622e-02, /* 0x3fb5555555555557 */
      cb_2 = 1.24999999978138668903e-02, /* 0x3f89999999865ede */
      cb_3 = 2.23219810758559851206e-03; /* 0x3f6249423bd94741 */

#if defined(COMPILING_LOG10)
  /* log10e_lead and log10e_tail sum to an extra-precision
     version of log10(e) (19 bits in lead) */
  static const double log10e_lead =
                          4.34293746948242187500e-01, /* 0x3fdbcb7800000000 */
      log10e_tail = 7.3495500964015109100644e-7;      /* 0x3ea8a93728719535 */
#elif defined(COMPILING_LOG2)
  /* log2e_lead and log2e_tail sum to an extra-precision
     version of log2(e) (19 bits in lead) */
  static const double log2e_lead =
                          1.44269180297851562500E+00, /* 0x3FF7154400000000 */
      log2e_tail = 3.23791044778235969970E-06;        /* 0x3ECB295C17F0BBBE */
#endif

  static const __UINT8_T log_thresh1 = 0x3fee0faa00000000,
                         log_thresh2 = 0x3ff1082c00000000;

  GET_BITS_DP64(x, ux);

  if ((ux & EXPBITS_DP64) == EXPBITS_DP64) {
    /* x is either NaN or infinity */
    if (ux & MANTBITS_DP64) {
      /* x is NaN */
      return x + x; /* Raise invalid if it is a signalling NaN */
    } else {
      /* x is infinity */
      if (ux & SIGNBIT_DP64)
        /* x is negative infinity. Return a NaN. */
        return retval_errno_edom(x);
      else
        return x;
    }
  } else if (!(ux & ~SIGNBIT_DP64)) {
    /* x is +/-zero. Return -infinity with div-by-zero flag. */
    return retval_errno_erange_overflow(x);
  } else if (ux & SIGNBIT_DP64) {
    /* x is negative. Return a NaN. */
    return retval_errno_edom(x);
  }

  /* log_thresh1 = 9.39412117004394531250e-1 = 0x3fee0faa00000000
     log_thresh2 = 1.06449508666992187500 = 0x3ff1082c00000000 */
  if (ux >= log_thresh1 && ux <= log_thresh2) {
    /* Arguments close to 1.0 are handled separately to maintain
       accuracy.

       The approximation in this region exploits the identity
           log( 1 + r ) = log( 1 + u/2 )  -  log( 1 - u/2 ), where
           u  = 2r / (2+r).
       Note that the right hand side has an odd Taylor series expansion
       which converges much faster than the Taylor series expansion of
       log( 1 + r ) in r. Thus, we approximate log( 1 + r ) by
           u + A1 * u^3 + A2 * u^5 + ... + An * u^(2n+1).

       One subtlety is that since u cannot be calculated from
       r exactly, the rounding error in the first u should be
       avoided if possible. To accomplish this, we observe that
                     u  =  r  -  r*r/(2+r).
       Since x (=1+r) is the input argument, and thus presumed exact,
       the formula above approximates u accurately because
                     u  =  r  -  correction,
       and the magnitude of "correction" (of the order of r*r)
       is small.
       With these observations, we will approximate log( 1 + r ) by
          r + (  (A1*u^3 + ... + An*u^(2n+1)) - correction ).

       We approximate log(1+r) by an odd polynomial in u, where
                u = 2r/(2+r) = r - r*r/(2+r).
    */
    r = x - 1.0;
    u = r / (2.0 + r);
    correction = r * u;
    u = u + u;
    v = u * u;
    r1 = r;
    r2 = (u * v * (ca_1 + v * (ca_2 + v * (ca_3 + v * ca_4))) - correction);
#if defined(COMPILING_LOG10)
    /* At this point r1,r2 is an extra-precise approximation to
       natural log(x). Convert it to log10(x) by multiplying
       carefully by log10(e).
       Shift some bits from r1 to r2 so that log10e_lead*r1
       can be computed without rounding error */
    r = r1;
    GET_BITS_DP64(r1, ut);
    PUT_BITS_DP64(ut & 0xffffffff00000000, r1);
    r2 = r2 + (r - r1);
    return (((log10e_tail * r2) + log10e_tail * r1) + log10e_lead * r2) +
           log10e_lead * r1;
#elif defined(COMPILING_LOG2)
    /* Similarly handle log2(x) by multiplying carefully by log2(e). */
    r = r1;
    GET_BITS_DP64(r1, ut);
    PUT_BITS_DP64(ut & 0xffffffff00000000, r1);
    r2 = r2 + (r - r1);
    return (((log2e_tail * r2) + log2e_tail * r1) + log2e_lead * r2) +
           log2e_lead * r1;
#else
    return r1 + r2;
#endif
  } else {
    /*
      First, we decompose the argument x to the form
      x  =  2**M  *  (F1  +  F2),
      where  1 <= F1+F2 < 2, M has the value of an integer,
      F1 = 1 + j/64, j ranges from 0 to 64, and |F2| <= 1/128.

      Second, we approximate log( 1 + F2/F1 ) by an odd polynomial
      in U, where U  =  2 F2 / (2 F1 + F2).
      Note that log( 1 + F2/F1 ) = log( 1 + U/2 ) - log( 1 - U/2 ).
      The core approximation calculates
      Poly = [log( 1 + U/2 ) - log( 1 - U/2 )]/U   -   1.
      Note that  log(1 + U/2) - log(1 - U/2) = 2 arctanh ( U/2 ),
      thus, Poly =  2 arctanh( U/2 ) / U  -  1.

      It is not hard to see that
        log(x) = M*log(2) + log(F1) + log( 1 + F2/F1 ).
      Hence, we return Z1 = log(F1), and  Z2 = log( 1 + F2/F1).
      The values of log(F1) are calculated beforehand and stored
      in the program.
    */

    if (ux < IMPBIT_DP64) {
      /* The input argument x is denormalized */
      /* Normalize f by increasing the exponent by 60
         and subtracting a correction to account for the implicit
         bit. This replaces a slow denormalized
         multiplication by a fast normal subtraction. */
      static const double corr =
          2.5653355008114851558350183e-290; /* 0x03d0000000000000 */
      PUT_BITS_DP64(ux | 0x03d0000000000000, f);
      f -= corr;
      GET_BITS_DP64(f, ux);
      expadjust = 60;
    } else {
      f = x;
      expadjust = 0;
    }

    /* Store the exponent of x in xexp and put
       f into the range [0.5,1) */
    xexp = (int)((ux & EXPBITS_DP64) >> EXPSHIFTBITS_DP64) - EXPBIAS_DP64 -
           expadjust;
    PUT_BITS_DP64((ux & MANTBITS_DP64) | HALFEXPBITS_DP64, f);

    /* Now  x = 2**xexp  * f,  1/2 <= f < 1. */

    /* Set index to be the nearest integer to 128*f */
    /*
      r = 128.0 * f;
      index = (int)(r + 0.5);
    */
    /* This code instead of the above can save several cycles.
       It only works because 64 <= r < 128, so
       the nearest integer is always contained in exactly
       7 bits, and the right shift is always the same. */
    index = (int)((((ux & 0x000fc00000000000) | 0x0010000000000000) >> 46) +
                  ((ux & 0x0000200000000000) >> 45));

    z1 = ln_lead_table[index - 64];
    q = ln_tail_table[index - 64];
    f1 = index * 0.0078125; /* 0.0078125 = 1/128 */
    f2 = f - f1;
    /* At this point, x = 2**xexp * ( f1  +  f2 ) where
       f1 = j/128, j = 64, 65, ..., 128 and |f2| <= 1/256. */

    /* Calculate u = 2 f2 / ( 2 f1 + f2 ) = f2 / ( f1 + 0.5*f2 ) */
    u = f2 / (f1 + 0.5 * f2);

    /* Here, |u| <= 2(exp(1/16)-1) / (exp(1/16)+1).
       The core approximation calculates
       poly = [log(1 + u/2) - log(1 - u/2)]/u  -  1  */
    v = u * u;
    poly = (v * (cb_1 + v * (cb_2 + v * cb_3)));
    z2 = q + (u + u * poly);

/* Now z1,z2 is an extra-precise approximation of log(2f). */

#if defined(COMPILING_LOG10)
    /* Add xexp * log(2) to z1,z2 to get log(x). */
    r1 = (xexp * log2_lead + z1);
    r2 = (xexp * log2_tail + z2);
    /* At this point r1,r2 is an extra-precise approximation to
       natural log(x). Convert it to log10(x) by multiplying
       carefully by log10(e). */
    return (((log10e_tail * r2) + log10e_tail * r1) + log10e_lead * r2) +
           log10e_lead * r1;
#elif defined(COMPILING_LOG2)
    /* Convert to log2(x) by multiplying carefully by log2(e)
       and adding xexp. */
    r1 = xexp + log2e_lead * z1;
    r2 = (((log2e_tail * z2) + log2e_tail * z1) + log2e_lead * z2);
    return r1 + r2;
#else
    /* Add xexp * log(2) to z1,z2 to get the result log(x).
       The computed r1 is not subject to rounding error because
       xexp has at most 10 significant bits, log(2) has 24 significant
       bits, and z1 has up to 24 bits; and the exponents of z1
       and z2 differ by at most 6. */
    r1 = (xexp * log2_lead + z1);
    r2 = (xexp * log2_tail + z2);
    /* Natural log(x) */
    return r1 + r2;
#endif
  }
}
