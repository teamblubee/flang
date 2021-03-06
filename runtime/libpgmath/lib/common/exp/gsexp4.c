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
vrs4_t
__gs_exp_4(vrs4_t x)
{
  return (__ZGVxN4v__mth_i_vr4(x, __mth_i_exp));
}

vrs4_t
__gs_exp_4m(vrs4_t x, vis4_t mask)
{
  return (__ZGVxM4v__mth_i_vr4(x, mask, __mth_i_exp));
}

vcs1_t
__gc_exp_1(vcs1_t x)
{
  return (__ZGVxN1v__mth_i_vc4(x, cexpf));
}

vcs2_t
__gc_exp_2(vcs2_t x)
{
  return (__ZGVxN2v__mth_i_vc4(x, cexpf));
}
#endif

