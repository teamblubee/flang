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

MTHINTRIN(sinh , ss   , em64t      , __mth_i_sinh          , __mth_i_sinh          , __mth_i_sinh          ,__math_dispatch_error)
MTHINTRIN(sinh , ds   , em64t      , __mth_i_dsinh         , __mth_i_dsinh         , __mth_i_dsinh         ,__math_dispatch_error)
MTHINTRIN(sinh , sv4  , em64t      , __fvssinh             , __fvssinh             , __gs_sinh_4_p         ,__math_dispatch_error)
MTHINTRIN(sinh , dv2  , em64t      , __fvdsinh             , __fvdsinh             , __gd_sinh_2_p         ,__math_dispatch_error)
MTHINTRIN(sinh , sv4m , em64t      , __fs_sinh_4_mn        , __rs_sinh_4_mn        , __ps_sinh_4_mn        ,__math_dispatch_error)
MTHINTRIN(sinh , dv2m , em64t      , __fd_sinh_2_mn        , __rd_sinh_2_mn        , __pd_sinh_2_mn        ,__math_dispatch_error)

MTHINTRIN(sinh , ss   , sse4       , __fss_sinh            , __fss_sinh            , __mth_i_sinh          ,__math_dispatch_error)
MTHINTRIN(sinh , ds   , sse4       , __fsd_sinh            , __fsd_sinh            , __mth_i_dsinh         ,__math_dispatch_error)
MTHINTRIN(sinh , sv4  , sse4       , __fvs_sinh            , __fvs_sinh            , __gs_sinh_4_p         ,__math_dispatch_error)
MTHINTRIN(sinh , dv2  , sse4       , __fvd_sinh            , __fvd_sinh            , __gd_sinh_2_p         ,__math_dispatch_error)
MTHINTRIN(sinh , sv4m , sse4       , __fs_sinh_4_mn        , __rs_sinh_4_mn        , __ps_sinh_4_mn        ,__math_dispatch_error)
MTHINTRIN(sinh , dv2m , sse4       , __fd_sinh_2_mn        , __rd_sinh_2_mn        , __pd_sinh_2_mn        ,__math_dispatch_error)

MTHINTRIN(sinh , ss   , avx        , __fss_sinh_vex        , __fss_sinh_vex        , __mth_i_sinh          ,__math_dispatch_error)
MTHINTRIN(sinh , ds   , avx        , __fsd_sinh_vex        , __fsd_sinh_vex        , __mth_i_dsinh         ,__math_dispatch_error)
MTHINTRIN(sinh , sv4  , avx        , __fvs_sinh_vex        , __fvs_sinh_vex        , __gs_sinh_4_p         ,__math_dispatch_error)
MTHINTRIN(sinh , dv2  , avx        , __fvd_sinh_vex        , __fvd_sinh_vex        , __gd_sinh_2_p         ,__math_dispatch_error)
MTHINTRIN(sinh , sv8  , avx        , __fvs_sinh_vex_256    , __fvs_sinh_vex_256    , __gs_sinh_8_p         ,__math_dispatch_error)
MTHINTRIN(sinh , dv4  , avx        , __fvd_sinh_vex_256    , __fvd_sinh_vex_256    , __gd_sinh_4_p         ,__math_dispatch_error)
MTHINTRIN(sinh , sv4m , avx        , __fs_sinh_4_mn        , __rs_sinh_4_mn        , __ps_sinh_4_mn        ,__math_dispatch_error)
MTHINTRIN(sinh , dv2m , avx        , __fd_sinh_2_mn        , __rd_sinh_2_mn        , __pd_sinh_2_mn        ,__math_dispatch_error)
MTHINTRIN(sinh , sv8m , avx        , __fs_sinh_8_mn        , __rs_sinh_8_mn        , __ps_sinh_8_mn        ,__math_dispatch_error)
MTHINTRIN(sinh , dv4m , avx        , __fd_sinh_4_mn        , __rd_sinh_4_mn        , __pd_sinh_4_mn        ,__math_dispatch_error)

MTHINTRIN(sinh , ss   , avxfma4    , __fss_sinh_fma4       , __fss_sinh_fma4       , __mth_i_sinh          ,__math_dispatch_error)
MTHINTRIN(sinh , ds   , avxfma4    , __fsd_sinh_fma4       , __fsd_sinh_fma4       , __mth_i_dsinh         ,__math_dispatch_error)
MTHINTRIN(sinh , sv4  , avxfma4    , __fvs_sinh_fma4       , __fvs_sinh_fma4       , __gs_sinh_4_p         ,__math_dispatch_error)
MTHINTRIN(sinh , dv2  , avxfma4    , __fvd_sinh_fma4       , __fvd_sinh_fma4       , __gd_sinh_2_p         ,__math_dispatch_error)
MTHINTRIN(sinh , sv8  , avxfma4    , __fvs_sinh_fma4_256   , __fvs_sinh_fma4_256   , __gs_sinh_8_p         ,__math_dispatch_error)
MTHINTRIN(sinh , dv4  , avxfma4    , __fvd_sinh_fma4_256   , __fvd_sinh_fma4_256   , __gd_sinh_4_p         ,__math_dispatch_error)
MTHINTRIN(sinh , sv4m , avxfma4    , __fs_sinh_4_mn        , __rs_sinh_4_mn        , __ps_sinh_4_mn        ,__math_dispatch_error)
MTHINTRIN(sinh , dv2m , avxfma4    , __fd_sinh_2_mn        , __rd_sinh_2_mn        , __pd_sinh_2_mn        ,__math_dispatch_error)
MTHINTRIN(sinh , sv8m , avxfma4    , __fs_sinh_8_mn        , __rs_sinh_8_mn        , __ps_sinh_8_mn        ,__math_dispatch_error)
MTHINTRIN(sinh , dv4m , avxfma4    , __fd_sinh_4_mn        , __rd_sinh_4_mn        , __pd_sinh_4_mn        ,__math_dispatch_error)

MTHINTRIN(sinh , ss   , avx2       , __fss_sinh_avx2       , __fss_sinh_avx2       , __mth_i_sinh_avx2     ,__math_dispatch_error)
MTHINTRIN(sinh , ds   , avx2       , __fsd_sinh_avx2       , __fsd_sinh_avx2       , __mth_i_dsinh_avx2    ,__math_dispatch_error)
MTHINTRIN(sinh , sv4  , avx2       , __fvs_sinh_avx2       , __fvs_sinh_avx2       , __gs_sinh_4_p         ,__math_dispatch_error)
MTHINTRIN(sinh , dv2  , avx2       , __fvd_sinh_avx2       , __fvd_sinh_avx2       , __gd_sinh_2_p         ,__math_dispatch_error)
MTHINTRIN(sinh , sv8  , avx2       , __fvs_sinh_avx2_256   , __fvs_sinh_avx2_256   , __gs_sinh_8_p         ,__math_dispatch_error)
MTHINTRIN(sinh , dv4  , avx2       , __fvd_sinh_avx2_256   , __fvd_sinh_avx2_256   , __gd_sinh_4_p         ,__math_dispatch_error)
MTHINTRIN(sinh , sv4m , avx2       , __fs_sinh_4_mn        , __rs_sinh_4_mn        , __ps_sinh_4_mn        ,__math_dispatch_error)
MTHINTRIN(sinh , dv2m , avx2       , __fd_sinh_2_mn        , __rd_sinh_2_mn        , __pd_sinh_2_mn        ,__math_dispatch_error)
MTHINTRIN(sinh , sv8m , avx2       , __fs_sinh_8_mn        , __rs_sinh_8_mn        , __ps_sinh_8_mn        ,__math_dispatch_error)
MTHINTRIN(sinh , dv4m , avx2       , __fd_sinh_4_mn        , __rd_sinh_4_mn        , __pd_sinh_4_mn        ,__math_dispatch_error)

MTHINTRIN(sinh , ss   , avx512knl  , __fss_sinh_avx2       , __fss_sinh_avx2       , __mth_i_sinh_avx2     ,__math_dispatch_error)
MTHINTRIN(sinh , ds   , avx512knl  , __fsd_sinh_avx2       , __fsd_sinh_avx2       , __mth_i_dsinh_avx2    ,__math_dispatch_error)
MTHINTRIN(sinh , sv4  , avx512knl  , __fvs_sinh_avx2       , __fvs_sinh_avx2       , __gs_sinh_4_p         ,__math_dispatch_error)
MTHINTRIN(sinh , dv2  , avx512knl  , __fvd_sinh_avx2       , __fvd_sinh_avx2       , __gd_sinh_2_p         ,__math_dispatch_error)
MTHINTRIN(sinh , sv8  , avx512knl  , __fvs_sinh_avx2_256   , __fvs_sinh_avx2_256   , __gs_sinh_8_p         ,__math_dispatch_error)
MTHINTRIN(sinh , dv4  , avx512knl  , __fvd_sinh_avx2_256   , __fvd_sinh_avx2_256   , __gd_sinh_4_p         ,__math_dispatch_error)
MTHINTRIN(sinh , sv16 , avx512knl  , __fs_sinh_16_z2yy     , __rs_sinh_16_z2yy     , __gs_sinh_16_p        ,__math_dispatch_error)
MTHINTRIN(sinh , dv8  , avx512knl  , __fd_sinh_8_z2yy      , __rd_sinh_8_z2yy      , __gd_sinh_8_p         ,__math_dispatch_error)
MTHINTRIN(sinh , sv4m , avx512knl  , __fs_sinh_4_mn        , __rs_sinh_4_mn        , __ps_sinh_4_mn        ,__math_dispatch_error)
MTHINTRIN(sinh , dv2m , avx512knl  , __fd_sinh_2_mn        , __rd_sinh_2_mn        , __pd_sinh_2_mn        ,__math_dispatch_error)
MTHINTRIN(sinh , sv8m , avx512knl  , __fs_sinh_8_mn        , __rs_sinh_8_mn        , __ps_sinh_8_mn        ,__math_dispatch_error)
MTHINTRIN(sinh , dv4m , avx512knl  , __fd_sinh_4_mn        , __rd_sinh_4_mn        , __pd_sinh_4_mn        ,__math_dispatch_error)
MTHINTRIN(sinh , sv16m, avx512knl  , __fs_sinh_16_mn       , __rs_sinh_16_mn       , __ps_sinh_16_mn       ,__math_dispatch_error)
MTHINTRIN(sinh , dv8m , avx512knl  , __fd_sinh_8_mn        , __rd_sinh_8_mn        , __pd_sinh_8_mn        ,__math_dispatch_error)

MTHINTRIN(sinh , ss   , avx512     , __fss_sinh_avx2       , __fss_sinh_avx2       , __mth_i_sinh_avx2     ,__math_dispatch_error)
MTHINTRIN(sinh , ds   , avx512     , __fsd_sinh_avx2       , __fsd_sinh_avx2       , __mth_i_dsinh_avx2    ,__math_dispatch_error)
MTHINTRIN(sinh , sv4  , avx512     , __fvs_sinh_avx2       , __fvs_sinh_avx2       , __gs_sinh_4_p         ,__math_dispatch_error)
MTHINTRIN(sinh , dv2  , avx512     , __fvd_sinh_avx2       , __fvd_sinh_avx2       , __gd_sinh_2_p         ,__math_dispatch_error)
MTHINTRIN(sinh , sv8  , avx512     , __fvs_sinh_avx2_256   , __fvs_sinh_avx2_256   , __gs_sinh_8_p         ,__math_dispatch_error)
MTHINTRIN(sinh , dv4  , avx512     , __fvd_sinh_avx2_256   , __fvd_sinh_avx2_256   , __gd_sinh_4_p         ,__math_dispatch_error)
MTHINTRIN(sinh , sv16 , avx512     , __fs_sinh_16_z2yy     , __rs_sinh_16_z2yy     , __gs_sinh_16_p        ,__math_dispatch_error)
MTHINTRIN(sinh , dv8  , avx512     , __fd_sinh_8_z2yy      , __rd_sinh_8_z2yy      , __gd_sinh_8_p         ,__math_dispatch_error)
MTHINTRIN(sinh , sv4m , avx512     , __fs_sinh_4_mn        , __rs_sinh_4_mn        , __ps_sinh_4_mn        ,__math_dispatch_error)
MTHINTRIN(sinh , dv2m , avx512     , __fd_sinh_2_mn        , __rd_sinh_2_mn        , __pd_sinh_2_mn        ,__math_dispatch_error)
MTHINTRIN(sinh , sv8m , avx512     , __fs_sinh_8_mn        , __rs_sinh_8_mn        , __ps_sinh_8_mn        ,__math_dispatch_error)
MTHINTRIN(sinh , dv4m , avx512     , __fd_sinh_4_mn        , __rd_sinh_4_mn        , __pd_sinh_4_mn        ,__math_dispatch_error)
MTHINTRIN(sinh , sv16m, avx512     , __fs_sinh_16_mn       , __rs_sinh_16_mn       , __ps_sinh_16_mn       ,__math_dispatch_error)
MTHINTRIN(sinh , dv8m , avx512     , __fd_sinh_8_mn        , __rd_sinh_8_mn        , __pd_sinh_8_mn        ,__math_dispatch_error)

MTHINTRIN(sinh , zv1  , em64t      , __gz_sinh_1v_f        , __gz_sinh_1v_r        , __gz_sinh_1v_p        ,__math_dispatch_error)
MTHINTRIN(sinh , cv2  , em64t      , __gc_sinh_2_f         , __gc_sinh_2_r         , __gc_sinh_2_p         ,__math_dispatch_error)
MTHINTRIN(sinh , zv1  , sse4       , __gz_sinh_1v_f        , __gz_sinh_1v_r        , __gz_sinh_1v_p        ,__math_dispatch_error)
MTHINTRIN(sinh , cv2  , sse4       , __gc_sinh_2_f         , __gc_sinh_2_r         , __gc_sinh_2_p         ,__math_dispatch_error)
MTHINTRIN(sinh , zv1  , avx        , __gz_sinh_1v_f        , __gz_sinh_1v_r        , __gz_sinh_1v_p        ,__math_dispatch_error)
MTHINTRIN(sinh , cv2  , avx        , __gc_sinh_2_f         , __gc_sinh_2_r         , __gc_sinh_2_p         ,__math_dispatch_error)
MTHINTRIN(sinh , cv4  , avx        , __gc_sinh_4_f         , __gc_sinh_4_r         , __gc_sinh_4_p         ,__math_dispatch_error)
MTHINTRIN(sinh , zv2  , avx        , __gz_sinh_2_f         , __gz_sinh_2_r         , __gz_sinh_2_p         ,__math_dispatch_error)
MTHINTRIN(sinh , zv1  , avxfma4    , __gz_sinh_1v_f        , __gz_sinh_1v_r        , __gz_sinh_1v_p        ,__math_dispatch_error)
MTHINTRIN(sinh , cv2  , avxfma4    , __gc_sinh_2_f         , __gc_sinh_2_r         , __gc_sinh_2_p         ,__math_dispatch_error)
MTHINTRIN(sinh , cv4  , avxfma4    , __gc_sinh_4_f         , __gc_sinh_4_r         , __gc_sinh_4_p         ,__math_dispatch_error)
MTHINTRIN(sinh , zv2  , avxfma4    , __gz_sinh_2_f         , __gz_sinh_2_r         , __gz_sinh_2_p         ,__math_dispatch_error)
MTHINTRIN(sinh , zv1  , avx2       , __gz_sinh_1v_f        , __gz_sinh_1v_r        , __gz_sinh_1v_p        ,__math_dispatch_error)
MTHINTRIN(sinh , cv2  , avx2       , __gc_sinh_2_f         , __gc_sinh_2_r         , __gc_sinh_2_p         ,__math_dispatch_error)
MTHINTRIN(sinh , cv4  , avx2       , __gc_sinh_4_f         , __gc_sinh_4_r         , __gc_sinh_4_p         ,__math_dispatch_error)
MTHINTRIN(sinh , zv2  , avx2       , __gz_sinh_2_f         , __gz_sinh_2_r         , __gz_sinh_2_p         ,__math_dispatch_error)
MTHINTRIN(sinh , zv1  , avx512knl  , __gz_sinh_1v_f        , __gz_sinh_1v_r        , __gz_sinh_1v_p        ,__math_dispatch_error)
MTHINTRIN(sinh , cv2  , avx512knl  , __gc_sinh_2_f         , __gc_sinh_2_r         , __gc_sinh_2_p         ,__math_dispatch_error)
MTHINTRIN(sinh , cv4  , avx512knl  , __gc_sinh_4_f         , __gc_sinh_4_r         , __gc_sinh_4_p         ,__math_dispatch_error)
MTHINTRIN(sinh , cv8  , avx512knl  , __gc_sinh_8_f         , __gc_sinh_8_r         , __gc_sinh_8_p         ,__math_dispatch_error)
MTHINTRIN(sinh , zv2  , avx512knl  , __gz_sinh_2_f         , __gz_sinh_2_r         , __gz_sinh_2_p         ,__math_dispatch_error)
MTHINTRIN(sinh , zv4  , avx512knl  , __gz_sinh_4_f         , __gz_sinh_4_r         , __gz_sinh_4_p         ,__math_dispatch_error)
MTHINTRIN(sinh , zv1  , avx512     , __gz_sinh_1v_f        , __gz_sinh_1v_r        , __gz_sinh_1v_p        ,__math_dispatch_error)
MTHINTRIN(sinh , cv2  , avx512     , __gc_sinh_2_f         , __gc_sinh_2_r         , __gc_sinh_2_p         ,__math_dispatch_error)
MTHINTRIN(sinh , cv4  , avx512     , __gc_sinh_4_f         , __gc_sinh_4_r         , __gc_sinh_4_p         ,__math_dispatch_error)
MTHINTRIN(sinh , cv8  , avx512     , __gc_sinh_8_f         , __gc_sinh_8_r         , __gc_sinh_8_p         ,__math_dispatch_error)
MTHINTRIN(sinh , zv2  , avx512     , __gz_sinh_2_f         , __gz_sinh_2_r         , __gz_sinh_2_p         ,__math_dispatch_error)
MTHINTRIN(sinh , zv4  , avx512     , __gz_sinh_4_f         , __gz_sinh_4_r         , __gz_sinh_4_p         ,__math_dispatch_error)
