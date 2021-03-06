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

MTHINTRIN(tan  , ss   , em64t      , __mth_i_tan           , __mth_i_tan           , __mth_i_tan           ,__math_dispatch_error)
MTHINTRIN(tan  , ds   , em64t      , __mth_i_dtan          , __mth_i_dtan          , __mth_i_dtan          ,__math_dispatch_error)
MTHINTRIN(tan  , sv4  , em64t      , __gs_tan_4_f          , __gs_tan_4_r          , __gs_tan_4_p          ,__math_dispatch_error)
MTHINTRIN(tan  , dv2  , em64t      , __gd_tan_2_f          , __gd_tan_2_r          , __gd_tan_2_p          ,__math_dispatch_error)
MTHINTRIN(tan  , sv4m , em64t      , __fs_tan_4_mn         , __rs_tan_4_mn         , __ps_tan_4_mn         ,__math_dispatch_error)
MTHINTRIN(tan  , dv2m , em64t      , __fd_tan_2_mn         , __rd_tan_2_mn         , __pd_tan_2_mn         ,__math_dispatch_error)

MTHINTRIN(tan  , ss   , sse4       , __mth_i_tan           , __mth_i_tan           , __mth_i_tan           ,__math_dispatch_error)
MTHINTRIN(tan  , ds   , sse4       , __mth_i_dtan          , __mth_i_dtan          , __mth_i_dtan          ,__math_dispatch_error)
MTHINTRIN(tan  , sv4  , sse4       , __gs_tan_4_f          , __gs_tan_4_r          , __gs_tan_4_p          ,__math_dispatch_error)
MTHINTRIN(tan  , dv2  , sse4       , __gd_tan_2_f          , __gd_tan_2_r          , __gd_tan_2_p          ,__math_dispatch_error)
MTHINTRIN(tan  , sv4m , sse4       , __fs_tan_4_mn         , __rs_tan_4_mn         , __ps_tan_4_mn         ,__math_dispatch_error)
MTHINTRIN(tan  , dv2m , sse4       , __fd_tan_2_mn         , __rd_tan_2_mn         , __pd_tan_2_mn         ,__math_dispatch_error)

MTHINTRIN(tan  , ss   , avx        , __fss_tan_vex         , __rss_tan_vex         , __mth_i_tan           ,__math_dispatch_error)
MTHINTRIN(tan  , ds   , avx        , __fsd_tan_vex         , __rsd_tan_vex         , __mth_i_dtan          ,__math_dispatch_error)
MTHINTRIN(tan  , sv4  , avx        , __fvs_tan_vex         , __rvs_tan_vex         , __gs_tan_4_p          ,__math_dispatch_error)
MTHINTRIN(tan  , dv2  , avx        , __fvd_tan_vex         , __rvd_tan_vex         , __gd_tan_2_p          ,__math_dispatch_error)
MTHINTRIN(tan  , sv8  , avx        , __fvs_tan_vex_256     , __rvs_tan_vex_256     , __gs_tan_8_p          ,__math_dispatch_error)
MTHINTRIN(tan  , dv4  , avx        , __fvd_tan_vex_256     , __rvd_tan_vex_256     , __gd_tan_4_p          ,__math_dispatch_error)
MTHINTRIN(tan  , sv4m , avx        , __fs_tan_4_mn         , __rs_tan_4_mn         , __ps_tan_4_mn         ,__math_dispatch_error)
MTHINTRIN(tan  , dv2m , avx        , __fd_tan_2_mn         , __rd_tan_2_mn         , __pd_tan_2_mn         ,__math_dispatch_error)
MTHINTRIN(tan  , sv8m , avx        , __fs_tan_8_mn         , __rs_tan_8_mn         , __ps_tan_8_mn         ,__math_dispatch_error)
MTHINTRIN(tan  , dv4m , avx        , __fd_tan_4_mn         , __rd_tan_4_mn         , __pd_tan_4_mn         ,__math_dispatch_error)

MTHINTRIN(tan  , ss   , avxfma4    , __fss_tan_fma4        , __rss_tan_fma4        , __mth_i_tan           ,__math_dispatch_error)
MTHINTRIN(tan  , ds   , avxfma4    , __fsd_tan_fma4        , __rsd_tan_fma4        , __mth_i_dtan          ,__math_dispatch_error)
MTHINTRIN(tan  , sv4  , avxfma4    , __fvs_tan_fma4        , __rvs_tan_fma4        , __gs_tan_4_p          ,__math_dispatch_error)
MTHINTRIN(tan  , dv2  , avxfma4    , __fvd_tan_fma4        , __rvd_tan_fma4        , __gd_tan_2_p          ,__math_dispatch_error)
MTHINTRIN(tan  , sv8  , avxfma4    , __fvs_tan_fma4_256    , __rvs_tan_fma4_256    , __gs_tan_8_p          ,__math_dispatch_error)
MTHINTRIN(tan  , dv4  , avxfma4    , __fvd_tan_fma4_256    , __rvd_tan_fma4_256    , __gd_tan_4_p          ,__math_dispatch_error)
MTHINTRIN(tan  , sv4m , avxfma4    , __fs_tan_4_mn         , __rs_tan_4_mn         , __ps_tan_4_mn         ,__math_dispatch_error)
MTHINTRIN(tan  , dv2m , avxfma4    , __fd_tan_2_mn         , __rd_tan_2_mn         , __pd_tan_2_mn         ,__math_dispatch_error)
MTHINTRIN(tan  , sv8m , avxfma4    , __fs_tan_8_mn         , __rs_tan_8_mn         , __ps_tan_8_mn         ,__math_dispatch_error)
MTHINTRIN(tan  , dv4m , avxfma4    , __fd_tan_4_mn         , __rd_tan_4_mn         , __pd_tan_4_mn         ,__math_dispatch_error)

MTHINTRIN(tan  , ss   , avx2       , __fs_tan_1_avx2       , __rss_tan_vex         , __mth_i_tan_avx2      ,__math_dispatch_error)
MTHINTRIN(tan  , ds   , avx2       , __mth_i_dtan_avx2     , __rsd_tan_vex         , __mth_i_dtan_avx2     ,__math_dispatch_error)
MTHINTRIN(tan  , sv4  , avx2       , __fs_tan_4_avx2       , __rvs_tan_vex         , __gs_tan_4_p          ,__math_dispatch_error)
MTHINTRIN(tan  , dv2  , avx2       , __gd_tan_2_f          , __rvd_tan_vex         , __gd_tan_2_p          ,__math_dispatch_error)
MTHINTRIN(tan  , sv8  , avx2       , __fs_tan_8_avx2       , __rvs_tan_vex_256     , __gs_tan_8_p          ,__math_dispatch_error)
MTHINTRIN(tan  , dv4  , avx2       , __gd_tan_4_f          , __rvd_tan_vex_256     , __gd_tan_4_p          ,__math_dispatch_error)
MTHINTRIN(tan  , sv4m , avx2       , __fs_tan_4_mn         , __rs_tan_4_mn         , __ps_tan_4_mn         ,__math_dispatch_error)
MTHINTRIN(tan  , dv2m , avx2       , __fd_tan_2_mn         , __rd_tan_2_mn         , __pd_tan_2_mn         ,__math_dispatch_error)
MTHINTRIN(tan  , sv8m , avx2       , __fs_tan_8_mn         , __rs_tan_8_mn         , __ps_tan_8_mn         ,__math_dispatch_error)
MTHINTRIN(tan  , dv4m , avx2       , __fd_tan_4_mn         , __rd_tan_4_mn         , __pd_tan_4_mn         ,__math_dispatch_error)

MTHINTRIN(tan  , ss   , avx512knl  , __fs_tan_1_avx2       , __rss_tan_vex         , __mth_i_tan_avx2      ,__math_dispatch_error)
MTHINTRIN(tan  , ds   , avx512knl  , __mth_i_dtan_avx2     , __rsd_tan_vex         , __mth_i_dtan_avx2     ,__math_dispatch_error)
MTHINTRIN(tan  , sv4  , avx512knl  , __fs_tan_4_avx2       , __rvs_tan_vex         , __gs_tan_4_p          ,__math_dispatch_error)
MTHINTRIN(tan  , dv2  , avx512knl  , __gd_tan_2_f          , __rvd_tan_vex         , __gd_tan_2_p          ,__math_dispatch_error)
MTHINTRIN(tan  , sv8  , avx512knl  , __fs_tan_8_avx2       , __rvs_tan_vex_256     , __gs_tan_8_p          ,__math_dispatch_error)
MTHINTRIN(tan  , dv4  , avx512knl  , __gd_tan_4_f          , __rvd_tan_vex_256     , __gd_tan_4_p          ,__math_dispatch_error)
MTHINTRIN(tan  , sv16 , avx512knl  , __fs_tan_16_z2yy      , __rs_tan_16_z2yy      , __gs_tan_16_p         ,__math_dispatch_error)
MTHINTRIN(tan  , dv8  , avx512knl  , __gd_tan_8_f          , __rd_tan_8_z2yy       , __gd_tan_8_p          ,__math_dispatch_error)
MTHINTRIN(tan  , sv4m , avx512knl  , __fs_tan_4_mn         , __rs_tan_4_mn         , __ps_tan_4_mn         ,__math_dispatch_error)
MTHINTRIN(tan  , dv2m , avx512knl  , __fd_tan_2_mn         , __rd_tan_2_mn         , __pd_tan_2_mn         ,__math_dispatch_error)
MTHINTRIN(tan  , sv8m , avx512knl  , __fs_tan_8_mn         , __rs_tan_8_mn         , __ps_tan_8_mn         ,__math_dispatch_error)
MTHINTRIN(tan  , dv4m , avx512knl  , __fd_tan_4_mn         , __rd_tan_4_mn         , __pd_tan_4_mn         ,__math_dispatch_error)
MTHINTRIN(tan  , sv16m, avx512knl  , __fs_tan_16_mn        , __rs_tan_16_mn        , __ps_tan_16_mn        ,__math_dispatch_error)
MTHINTRIN(tan  , dv8m , avx512knl  , __fd_tan_8_mn         , __rd_tan_8_mn         , __pd_tan_8_mn         ,__math_dispatch_error)

MTHINTRIN(tan  , ss   , avx512     , __fs_tan_1_avx2       , __rss_tan_vex         , __mth_i_tan_avx2      ,__math_dispatch_error)
MTHINTRIN(tan  , ds   , avx512     , __mth_i_dtan_avx2     , __rsd_tan_vex         , __mth_i_dtan_avx2     ,__math_dispatch_error)
MTHINTRIN(tan  , sv4  , avx512     , __fs_tan_4_avx2       , __rvs_tan_vex         , __gs_tan_4_p          ,__math_dispatch_error)
MTHINTRIN(tan  , dv2  , avx512     , __gd_tan_2_f          , __rvd_tan_vex         , __gd_tan_2_p          ,__math_dispatch_error)
MTHINTRIN(tan  , sv8  , avx512     , __fs_tan_8_avx2       , __rvs_tan_vex_256     , __gs_tan_8_p          ,__math_dispatch_error)
MTHINTRIN(tan  , dv4  , avx512     , __gd_tan_4_f          , __rvd_tan_vex_256     , __gd_tan_4_p          ,__math_dispatch_error)
MTHINTRIN(tan  , sv16 , avx512     , __fs_tan_16_avx512    , __rs_tan_16_z2yy      , __gs_tan_16_p         ,__math_dispatch_error)
MTHINTRIN(tan  , dv8  , avx512     , __gd_tan_8_f          , __rd_tan_8_z2yy       , __gd_tan_8_p          ,__math_dispatch_error)
MTHINTRIN(tan  , sv4m , avx512     , __fs_tan_4_mn         , __rs_tan_4_mn         , __ps_tan_4_mn         ,__math_dispatch_error)
MTHINTRIN(tan  , dv2m , avx512     , __fd_tan_2_mn         , __rd_tan_2_mn         , __pd_tan_2_mn         ,__math_dispatch_error)
MTHINTRIN(tan  , sv8m , avx512     , __fs_tan_8_mn         , __rs_tan_8_mn         , __ps_tan_8_mn         ,__math_dispatch_error)
MTHINTRIN(tan  , dv4m , avx512     , __fd_tan_4_mn         , __rd_tan_4_mn         , __pd_tan_4_mn         ,__math_dispatch_error)
MTHINTRIN(tan  , sv16m, avx512     , __fs_tan_16_mn        , __rs_tan_16_mn        , __ps_tan_16_mn        ,__math_dispatch_error)
MTHINTRIN(tan  , dv8m , avx512     , __fd_tan_8_mn         , __rd_tan_8_mn         , __pd_tan_8_mn         ,__math_dispatch_error)

MTHINTRIN(tan , zv1  , em64t       , __gz_tan_1v_f         , __gz_tan_1v_r         , __gz_tan_1v_p        ,__math_dispatch_error)
MTHINTRIN(tan , cv2  , em64t       , __gc_tan_2_f          , __gc_tan_2_r          , __gc_tan_2_p         ,__math_dispatch_error)
MTHINTRIN(tan , zv1  , sse4        , __gz_tan_1v_f         , __gz_tan_1v_r         , __gz_tan_1v_p        ,__math_dispatch_error)
MTHINTRIN(tan , cv2  , sse4        , __gc_tan_2_f          , __gc_tan_2_r          , __gc_tan_2_p         ,__math_dispatch_error)
MTHINTRIN(tan , zv1  , avx         , __gz_tan_1v_f         , __gz_tan_1v_r         , __gz_tan_1v_p        ,__math_dispatch_error)
MTHINTRIN(tan , cv2  , avx         , __gc_tan_2_f          , __gc_tan_2_r          , __gc_tan_2_p         ,__math_dispatch_error)
MTHINTRIN(tan , cv4  , avx         , __gc_tan_4_f          , __gc_tan_4_r          , __gc_tan_4_p         ,__math_dispatch_error)
MTHINTRIN(tan , zv2  , avx         , __gz_tan_2_f          , __gz_tan_2_r          , __gz_tan_2_p         ,__math_dispatch_error)
MTHINTRIN(tan , zv1  , avxfma4     , __gz_tan_1v_f         , __gz_tan_1v_r         , __gz_tan_1v_p        ,__math_dispatch_error)
MTHINTRIN(tan , cv2  , avxfma4     , __gc_tan_2_f          , __gc_tan_2_r          , __gc_tan_2_p         ,__math_dispatch_error)
MTHINTRIN(tan , cv4  , avxfma4     , __gc_tan_4_f          , __gc_tan_4_r          , __gc_tan_4_p         ,__math_dispatch_error)
MTHINTRIN(tan , zv2  , avxfma4     , __gz_tan_2_f          , __gz_tan_2_r          , __gz_tan_2_p         ,__math_dispatch_error)
MTHINTRIN(tan , zv1  , avx2        , __gz_tan_1v_f         , __gz_tan_1v_r         , __gz_tan_1v_p        ,__math_dispatch_error)
MTHINTRIN(tan , cv2  , avx2        , __gc_tan_2_f          , __gc_tan_2_r          , __gc_tan_2_p         ,__math_dispatch_error)
MTHINTRIN(tan , cv4  , avx2        , __gc_tan_4_f          , __gc_tan_4_r          , __gc_tan_4_p         ,__math_dispatch_error)
MTHINTRIN(tan , zv2  , avx2        , __gz_tan_2_f          , __gz_tan_2_r          , __gz_tan_2_p         ,__math_dispatch_error)
MTHINTRIN(tan , zv1  , avx512knl   , __gz_tan_1v_f         , __gz_tan_1v_r         , __gz_tan_1v_p        ,__math_dispatch_error)
MTHINTRIN(tan , cv2  , avx512knl   , __gc_tan_2_f          , __gc_tan_2_r          , __gc_tan_2_p         ,__math_dispatch_error)
MTHINTRIN(tan , cv4  , avx512knl   , __gc_tan_4_f          , __gc_tan_4_r          , __gc_tan_4_p         ,__math_dispatch_error)
MTHINTRIN(tan , cv8  , avx512knl   , __gc_tan_8_f          , __gc_tan_8_r          , __gc_tan_8_p         ,__math_dispatch_error)
MTHINTRIN(tan , zv2  , avx512knl   , __gz_tan_2_f          , __gz_tan_2_r          , __gz_tan_2_p         ,__math_dispatch_error)
MTHINTRIN(tan , zv4  , avx512knl   , __gz_tan_4_f          , __gz_tan_4_r          , __gz_tan_4_p         ,__math_dispatch_error)
MTHINTRIN(tan , zv1  , avx512      , __gz_tan_1v_f         , __gz_tan_1v_r         , __gz_tan_1v_p        ,__math_dispatch_error)
MTHINTRIN(tan , cv2  , avx512      , __gc_tan_2_f          , __gc_tan_2_r          , __gc_tan_2_p         ,__math_dispatch_error)
MTHINTRIN(tan , cv4  , avx512      , __gc_tan_4_f          , __gc_tan_4_r          , __gc_tan_4_p         ,__math_dispatch_error)
MTHINTRIN(tan , cv8  , avx512      , __gc_tan_8_f          , __gc_tan_8_r          , __gc_tan_8_p         ,__math_dispatch_error)
MTHINTRIN(tan , zv2  , avx512      , __gz_tan_2_f          , __gz_tan_2_r          , __gz_tan_2_p         ,__math_dispatch_error)
MTHINTRIN(tan , zv4  , avx512      , __gz_tan_4_f          , __gz_tan_4_r          , __gz_tan_4_p         ,__math_dispatch_error)
