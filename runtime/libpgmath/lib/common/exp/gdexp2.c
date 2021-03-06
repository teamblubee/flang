/*
 * Copyright (c) 2018, NVIDIA CORPORATION.  All rights reserved.
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

#include "mth_intrinsics.h"

#if defined(TARGET_LINUX_ARM64) || defined(TARGET_FREEBSD_ARM64)
vrd2_t
__gd_exp_2(vrd2_t x)
{
  return (__ZGVxN2v__mth_i_vr8(x, __mth_i_dexp));
}

vrd2_t
__gd_exp_2m(vrd2_t x, vid2_t mask)
{
  return (__ZGVxM2v__mth_i_vr8(x, mask, __mth_i_dexp));
}

double complex
__gz_exp_1(double complex x)
{
  return (cexp(x));
}

vcd1_t
__gz_exp_1v(vcd1_t x)
{
  return (__ZGVxN1v__mth_i_vc8(x, cexp));
}
#endif

