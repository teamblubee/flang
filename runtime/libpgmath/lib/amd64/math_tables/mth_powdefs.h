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

MTHINTRIN(pow  , ss   , em64t      , __mth_i_rpowr         , __mth_i_rpowr         , __mth_i_rpowr         ,__math_dispatch_error)
MTHINTRIN(pow  , ds   , em64t      , __mth_i_dpowd         , __mth_i_dpowd         , __mth_i_dpowd         ,__math_dispatch_error)
MTHINTRIN(pow  , sv4  , em64t      , __fvspow              , __fvspow              , __gs_pow_4_p          ,__math_dispatch_error)
MTHINTRIN(pow  , dv2  , em64t      , __fvdpow              , __fvdpow              , __gd_pow_2_p          ,__math_dispatch_error)
MTHINTRIN(pow  , sv4m , em64t      , __fs_pow_4_mn         , __rs_pow_4_mn         , __ps_pow_4_mn         ,__math_dispatch_error)
MTHINTRIN(pow  , dv2m , em64t      , __fd_pow_2_mn         , __rd_pow_2_mn         , __pd_pow_2_mn         ,__math_dispatch_error)

MTHINTRIN(pow  , ss   , sse4       , __fss_pow             , __fss_pow             , __mth_i_rpowr         ,__math_dispatch_error)
MTHINTRIN(pow  , ds   , sse4       , __fsd_pow             , __fsd_pow             , __mth_i_dpowd         ,__math_dispatch_error)
MTHINTRIN(pow  , sv4  , sse4       , __fvs_pow             , __fvs_pow             , __gs_pow_4_p          ,__math_dispatch_error)
MTHINTRIN(pow  , dv2  , sse4       , __fvd_pow             , __fvd_pow             , __gd_pow_2_p          ,__math_dispatch_error)
MTHINTRIN(pow  , sv4m , sse4       , __fs_pow_4_mn         , __rs_pow_4_mn         , __ps_pow_4_mn         ,__math_dispatch_error)
MTHINTRIN(pow  , dv2m , sse4       , __fd_pow_2_mn         , __rd_pow_2_mn         , __pd_pow_2_mn         ,__math_dispatch_error)

MTHINTRIN(pow  , ss   , avx        , __fss_pow_vex         , __rss_pow_vex         , __mth_i_rpowr         ,__math_dispatch_error)
MTHINTRIN(pow  , ds   , avx        , __fsd_pow_vex         , __fsd_pow_vex         , __mth_i_dpowd         ,__math_dispatch_error)
MTHINTRIN(pow  , sv4  , avx        , __fvs_pow_vex         , __rvs_pow_vex         , __gs_pow_4_p          ,__math_dispatch_error)
MTHINTRIN(pow  , dv2  , avx        , __fvd_pow_vex         , __fvd_pow_vex         , __gd_pow_2_p          ,__math_dispatch_error)
MTHINTRIN(pow  , sv8  , avx        , __fvs_pow_vex_256     , __rvs_pow_vex_256     , __gs_pow_8_p          ,__math_dispatch_error)
MTHINTRIN(pow  , dv4  , avx        , __fvd_pow_vex_256     , __fvd_pow_vex_256     , __gd_pow_4_p          ,__math_dispatch_error)
MTHINTRIN(pow  , sv4m , avx        , __fs_pow_4_mn         , __rs_pow_4_mn         , __ps_pow_4_mn         ,__math_dispatch_error)
MTHINTRIN(pow  , dv2m , avx        , __fd_pow_2_mn         , __rd_pow_2_mn         , __pd_pow_2_mn         ,__math_dispatch_error)
MTHINTRIN(pow  , sv8m , avx        , __fs_pow_8_mn         , __rs_pow_8_mn         , __ps_pow_8_mn         ,__math_dispatch_error)
MTHINTRIN(pow  , dv4m , avx        , __fd_pow_4_mn         , __rd_pow_4_mn         , __pd_pow_4_mn         ,__math_dispatch_error)

MTHINTRIN(pow  , ss   , avxfma4    , __fss_pow_fma4        , __rss_pow_fma4        , __mth_i_rpowr         ,__math_dispatch_error)
MTHINTRIN(pow  , ds   , avxfma4    , __fsd_pow_fma4        , __fsd_pow_fma4        , __mth_i_dpowd         ,__math_dispatch_error)
MTHINTRIN(pow  , sv4  , avxfma4    , __fvs_pow_fma4        , __rvs_pow_fma4        , __gs_pow_4_p          ,__math_dispatch_error)
MTHINTRIN(pow  , dv2  , avxfma4    , __fvd_pow_fma4        , __fvd_pow_fma4        , __gd_pow_2_p          ,__math_dispatch_error)
MTHINTRIN(pow  , sv8  , avxfma4    , __fvs_pow_fma4_256    , __rvs_pow_fma4_256    , __gs_pow_8_p          ,__math_dispatch_error)
MTHINTRIN(pow  , dv4  , avxfma4    , __fvd_pow_fma4_256    , __fvd_pow_fma4_256    , __gd_pow_4_p          ,__math_dispatch_error)
MTHINTRIN(pow  , sv4m , avxfma4    , __fs_pow_4_mn         , __rs_pow_4_mn         , __ps_pow_4_mn         ,__math_dispatch_error)
MTHINTRIN(pow  , dv2m , avxfma4    , __fd_pow_2_mn         , __rd_pow_2_mn         , __pd_pow_2_mn         ,__math_dispatch_error)
MTHINTRIN(pow  , sv8m , avxfma4    , __fs_pow_8_mn         , __rs_pow_8_mn         , __ps_pow_8_mn         ,__math_dispatch_error)
MTHINTRIN(pow  , dv4m , avxfma4    , __fd_pow_4_mn         , __rd_pow_4_mn         , __pd_pow_4_mn         ,__math_dispatch_error)

MTHINTRIN(pow  , ss   , avx2       , __fss_pow_fma3        , __fss_pow_fma3        , __mth_i_rpowr_avx2    ,__math_dispatch_error)
MTHINTRIN(pow  , ds   , avx2       , __fsd_pow_fma3        , __fsd_pow_fma3        , __mth_i_dpowd         ,__math_dispatch_error)
MTHINTRIN(pow  , sv4  , avx2       , __fvs_pow_fma3        , __fvs_pow_fma3        , __gs_pow_4_p          ,__math_dispatch_error)
MTHINTRIN(pow  , dv2  , avx2       , __fvd_pow_fma3        , __fvd_pow_fma3        , __gd_pow_2_p          ,__math_dispatch_error)
MTHINTRIN(pow  , sv8  , avx2       , __fvs_pow_fma3_256    , __fvs_pow_fma3_256    , __gs_pow_8_p          ,__math_dispatch_error)
MTHINTRIN(pow  , dv4  , avx2       , __fvd_pow_fma3_256    , __fvd_pow_fma3_256    , __gd_pow_4_p          ,__math_dispatch_error)
MTHINTRIN(pow  , sv4m , avx2       , __fs_pow_4_mn         , __rs_pow_4_mn         , __ps_pow_4_mn         ,__math_dispatch_error)
MTHINTRIN(pow  , dv2m , avx2       , __fd_pow_2_mn         , __rd_pow_2_mn         , __pd_pow_2_mn         ,__math_dispatch_error)
MTHINTRIN(pow  , sv8m , avx2       , __fs_pow_8_mn         , __rs_pow_8_mn         , __ps_pow_8_mn         ,__math_dispatch_error)
MTHINTRIN(pow  , dv4m , avx2       , __fd_pow_4_mn         , __rd_pow_4_mn         , __pd_pow_4_mn         ,__math_dispatch_error)

MTHINTRIN(pow  , ss   , avx512knl  , __fss_pow_fma3        , __rss_pow_vex         , __mth_i_rpowr_avx2    ,__math_dispatch_error)
MTHINTRIN(pow  , ds   , avx512knl  , __fsd_pow_fma3        , __fsd_pow_fma3        , __mth_i_dpowd         ,__math_dispatch_error)
MTHINTRIN(pow  , sv4  , avx512knl  , __fvs_pow_fma3        , __rvs_pow_vex         , __gs_pow_4_p          ,__math_dispatch_error)
MTHINTRIN(pow  , dv2  , avx512knl  , __fvd_pow_fma3        , __fvd_pow_fma3        , __gd_pow_2_p          ,__math_dispatch_error)
MTHINTRIN(pow  , sv8  , avx512knl  , __fvs_pow_fma3_256    , __rvs_pow_vex_256     , __gs_pow_8_p          ,__math_dispatch_error)
MTHINTRIN(pow  , dv4  , avx512knl  , __fvd_pow_fma3_256    , __fvd_pow_fma3_256    , __gd_pow_4_p          ,__math_dispatch_error)
MTHINTRIN(pow  , sv16 , avx512knl  , __fvs_pow_fma3_knl    , __fs_pow_16_z2yy      , __gs_pow_16_p         ,__math_dispatch_error)
MTHINTRIN(pow  , dv8  , avx512knl  , __fvd_pow_fma3_knl    , __fvd_pow_fma3_knl    , __gd_pow_8_p          ,__math_dispatch_error)
MTHINTRIN(pow  , sv4m , avx512knl  , __fs_pow_4_mn         , __rs_pow_4_mn         , __ps_pow_4_mn         ,__math_dispatch_error)
MTHINTRIN(pow  , dv2m , avx512knl  , __fd_pow_2_mn         , __rd_pow_2_mn         , __pd_pow_2_mn         ,__math_dispatch_error)
MTHINTRIN(pow  , sv8m , avx512knl  , __fs_pow_8_mn         , __rs_pow_8_mn         , __ps_pow_8_mn         ,__math_dispatch_error)
MTHINTRIN(pow  , dv4m , avx512knl  , __fd_pow_4_mn         , __rd_pow_4_mn         , __pd_pow_4_mn         ,__math_dispatch_error)
MTHINTRIN(pow  , sv16m, avx512knl  , __fs_pow_16_mn        , __rs_pow_16_mn        , __ps_pow_16_mn        ,__math_dispatch_error)
MTHINTRIN(pow  , dv8m , avx512knl  , __fd_pow_8_mn         , __rd_pow_8_mn         , __pd_pow_8_mn         ,__math_dispatch_error)

MTHINTRIN(pow  , ss   , avx512     , __fss_pow_fma3        , __rss_pow_vex         , __mth_i_rpowr_avx2    ,__math_dispatch_error)
MTHINTRIN(pow  , ds   , avx512     , __fsd_pow_fma3        , __fsd_pow_fma3        , __mth_i_dpowd         ,__math_dispatch_error)
MTHINTRIN(pow  , sv4  , avx512     , __fvs_pow_fma3        , __rvs_pow_vex         , __gs_pow_4_p          ,__math_dispatch_error)
MTHINTRIN(pow  , dv2  , avx512     , __fvd_pow_fma3        , __fvd_pow_fma3        , __gd_pow_2_p          ,__math_dispatch_error)
MTHINTRIN(pow  , sv8  , avx512     , __fvs_pow_fma3_256    , __rvs_pow_vex_256     , __gs_pow_8_p          ,__math_dispatch_error)
MTHINTRIN(pow  , dv4  , avx512     , __fvd_pow_fma3_256    , __fvd_pow_fma3_256    , __gd_pow_4_p          ,__math_dispatch_error)
MTHINTRIN(pow  , sv16 , avx512     , __fvs_pow_fma3_512    , __fvs_pow_fma3_512    , __gs_pow_16_p         ,__math_dispatch_error)
MTHINTRIN(pow  , dv8  , avx512     , __fvd_pow_fma3_512    , __fvd_pow_fma3_512    , __gd_pow_8_p          ,__math_dispatch_error)
MTHINTRIN(pow  , sv4m , avx512     , __fs_pow_4_mn         , __rs_pow_4_mn         , __ps_pow_4_mn         ,__math_dispatch_error)
MTHINTRIN(pow  , dv2m , avx512     , __fd_pow_2_mn         , __rd_pow_2_mn         , __pd_pow_2_mn         ,__math_dispatch_error)
MTHINTRIN(pow  , sv8m , avx512     , __fs_pow_8_mn         , __rs_pow_8_mn         , __ps_pow_8_mn         ,__math_dispatch_error)
MTHINTRIN(pow  , dv4m , avx512     , __fd_pow_4_mn         , __rd_pow_4_mn         , __pd_pow_4_mn         ,__math_dispatch_error)
MTHINTRIN(pow  , sv16m, avx512     , __fs_pow_16_mn        , __rs_pow_16_mn        , __ps_pow_16_mn        ,__math_dispatch_error)
MTHINTRIN(pow  , dv8m , avx512     , __fd_pow_8_mn         , __rd_pow_8_mn         , __pd_pow_8_mn         ,__math_dispatch_error)

MTHINTRIN(pow , zv1  , em64t       , __gz_pow_1v_f         , __gz_pow_1v_r         , __gz_pow_1v_p        ,__math_dispatch_error)
MTHINTRIN(pow , cv2  , em64t       , __gc_pow_2_f          , __gc_pow_2_r          , __gc_pow_2_p         ,__math_dispatch_error)
MTHINTRIN(pow , zv1  , sse4        , __gz_pow_1v_f         , __gz_pow_1v_r         , __gz_pow_1v_p        ,__math_dispatch_error)
MTHINTRIN(pow , cv2  , sse4        , __gc_pow_2_f          , __gc_pow_2_r          , __gc_pow_2_p         ,__math_dispatch_error)
MTHINTRIN(pow , zv1  , avx         , __gz_pow_1v_f         , __gz_pow_1v_r         , __gz_pow_1v_p        ,__math_dispatch_error)
MTHINTRIN(pow , cv2  , avx         , __gc_pow_2_f          , __gc_pow_2_r          , __gc_pow_2_p         ,__math_dispatch_error)
MTHINTRIN(pow , cv4  , avx         , __gc_pow_4_f          , __gc_pow_4_r          , __gc_pow_4_p         ,__math_dispatch_error)
MTHINTRIN(pow , zv2  , avx         , __gz_pow_2_f          , __gz_pow_2_r          , __gz_pow_2_p         ,__math_dispatch_error)
MTHINTRIN(pow , zv1  , avxfma4     , __gz_pow_1v_f         , __gz_pow_1v_r         , __gz_pow_1v_p        ,__math_dispatch_error)
MTHINTRIN(pow , cv2  , avxfma4     , __gc_pow_2_f          , __gc_pow_2_r          , __gc_pow_2_p         ,__math_dispatch_error)
MTHINTRIN(pow , cv4  , avxfma4     , __gc_pow_4_f          , __gc_pow_4_r          , __gc_pow_4_p         ,__math_dispatch_error)
MTHINTRIN(pow , zv2  , avxfma4     , __gz_pow_2_f          , __gz_pow_2_r          , __gz_pow_2_p         ,__math_dispatch_error)
MTHINTRIN(pow , zv1  , avx2        , __gz_pow_1v_f         , __gz_pow_1v_r         , __gz_pow_1v_p        ,__math_dispatch_error)
MTHINTRIN(pow , cv2  , avx2        , __gc_pow_2_f          , __gc_pow_2_r          , __gc_pow_2_p         ,__math_dispatch_error)
MTHINTRIN(pow , cv4  , avx2        , __gc_pow_4_f          , __gc_pow_4_r          , __gc_pow_4_p         ,__math_dispatch_error)
MTHINTRIN(pow , zv2  , avx2        , __gz_pow_2_f          , __gz_pow_2_r          , __gz_pow_2_p         ,__math_dispatch_error)
MTHINTRIN(pow , zv1  , avx512knl   , __gz_pow_1v_f         , __gz_pow_1v_r         , __gz_pow_1v_p        ,__math_dispatch_error)
MTHINTRIN(pow , cv2  , avx512knl   , __gc_pow_2_f          , __gc_pow_2_r          , __gc_pow_2_p         ,__math_dispatch_error)
MTHINTRIN(pow , cv4  , avx512knl   , __gc_pow_4_f          , __gc_pow_4_r          , __gc_pow_4_p         ,__math_dispatch_error)
MTHINTRIN(pow , cv8  , avx512knl   , __gc_pow_8_f          , __gc_pow_8_r          , __gc_pow_8_p         ,__math_dispatch_error)
MTHINTRIN(pow , zv2  , avx512knl   , __gz_pow_2_f          , __gz_pow_2_r          , __gz_pow_2_p         ,__math_dispatch_error)
MTHINTRIN(pow , zv4  , avx512knl   , __gz_pow_4_f          , __gz_pow_4_r          , __gz_pow_4_p         ,__math_dispatch_error)
MTHINTRIN(pow , zv1  , avx512      , __gz_pow_1v_f         , __gz_pow_1v_r         , __gz_pow_1v_p        ,__math_dispatch_error)
MTHINTRIN(pow , cv2  , avx512      , __gc_pow_2_f          , __gc_pow_2_r          , __gc_pow_2_p         ,__math_dispatch_error)
MTHINTRIN(pow , cv4  , avx512      , __gc_pow_4_f          , __gc_pow_4_r          , __gc_pow_4_p         ,__math_dispatch_error)
MTHINTRIN(pow , cv8  , avx512      , __gc_pow_8_f          , __gc_pow_8_r          , __gc_pow_8_p         ,__math_dispatch_error)
MTHINTRIN(pow , zv2  , avx512      , __gz_pow_2_f          , __gz_pow_2_r          , __gz_pow_2_p         ,__math_dispatch_error)
MTHINTRIN(pow , zv4  , avx512      , __gz_pow_4_f          , __gz_pow_4_r          , __gz_pow_4_p         ,__math_dispatch_error)
