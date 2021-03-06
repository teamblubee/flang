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

MTHINTRIN(cosh , ss   , em64t      , __mth_i_cosh          , __mth_i_cosh          , __mth_i_cosh          ,__math_dispatch_error)
MTHINTRIN(cosh , ds   , em64t      , __mth_i_dcosh         , __mth_i_dcosh         , __mth_i_dcosh         ,__math_dispatch_error)
MTHINTRIN(cosh , sv4  , em64t      , __fvscosh             , __fvscosh             , __gs_cosh_4_p         ,__math_dispatch_error)
MTHINTRIN(cosh , dv2  , em64t      , __fvdcosh             , __fvdcosh             , __gd_cosh_2_p         ,__math_dispatch_error)
MTHINTRIN(cosh , sv4m , em64t      , __fs_cosh_4_mn        , __rs_cosh_4_mn        , __ps_cosh_4_mn        ,__math_dispatch_error)
MTHINTRIN(cosh , dv2m , em64t      , __fd_cosh_2_mn        , __rd_cosh_2_mn        , __pd_cosh_2_mn        ,__math_dispatch_error)

MTHINTRIN(cosh , ss   , sse4       , __fss_cosh            , __fss_cosh            , __mth_i_cosh          ,__math_dispatch_error)
MTHINTRIN(cosh , ds   , sse4       , __fsd_cosh            , __fsd_cosh            , __mth_i_dcosh         ,__math_dispatch_error)
MTHINTRIN(cosh , sv4  , sse4       , __fvs_cosh            , __fvs_cosh            , __gs_cosh_4_p         ,__math_dispatch_error)
MTHINTRIN(cosh , dv2  , sse4       , __fvd_cosh            , __fvd_cosh            , __gd_cosh_2_p         ,__math_dispatch_error)
MTHINTRIN(cosh , sv4m , sse4       , __fs_cosh_4_mn        , __rs_cosh_4_mn        , __ps_cosh_4_mn        ,__math_dispatch_error)
MTHINTRIN(cosh , dv2m , sse4       , __fd_cosh_2_mn        , __rd_cosh_2_mn        , __pd_cosh_2_mn        ,__math_dispatch_error)

MTHINTRIN(cosh , ss   , avx        , __fss_cosh_vex        , __fss_cosh_vex        , __mth_i_cosh          ,__math_dispatch_error)
MTHINTRIN(cosh , ds   , avx        , __fsd_cosh_vex        , __fsd_cosh_vex        , __mth_i_dcosh         ,__math_dispatch_error)
MTHINTRIN(cosh , sv4  , avx        , __fvs_cosh_vex        , __fvs_cosh_vex        , __gs_cosh_4_p         ,__math_dispatch_error)
MTHINTRIN(cosh , dv2  , avx        , __fvd_cosh_vex        , __fvd_cosh_vex        , __gd_cosh_2_p         ,__math_dispatch_error)
MTHINTRIN(cosh , sv8  , avx        , __fvs_cosh_vex_256    , __fvs_cosh_vex_256    , __gs_cosh_8_p         ,__math_dispatch_error)
MTHINTRIN(cosh , dv4  , avx        , __fvd_cosh_vex_256    , __fvd_cosh_vex_256    , __gd_cosh_4_p         ,__math_dispatch_error)
MTHINTRIN(cosh , sv4m , avx        , __fs_cosh_4_mn        , __rs_cosh_4_mn        , __ps_cosh_4_mn        ,__math_dispatch_error)
MTHINTRIN(cosh , dv2m , avx        , __fd_cosh_2_mn        , __rd_cosh_2_mn        , __pd_cosh_2_mn        ,__math_dispatch_error)
MTHINTRIN(cosh , sv8m , avx        , __fs_cosh_8_mn        , __rs_cosh_8_mn        , __ps_cosh_8_mn        ,__math_dispatch_error)
MTHINTRIN(cosh , dv4m , avx        , __fd_cosh_4_mn        , __rd_cosh_4_mn        , __pd_cosh_4_mn        ,__math_dispatch_error)

MTHINTRIN(cosh , ss   , avxfma4    , __fss_cosh_fma4       , __fss_cosh_fma4       , __mth_i_cosh          ,__math_dispatch_error)
MTHINTRIN(cosh , ds   , avxfma4    , __fsd_cosh_fma4       , __fsd_cosh_fma4       , __mth_i_dcosh         ,__math_dispatch_error)
MTHINTRIN(cosh , sv4  , avxfma4    , __fvs_cosh_fma4       , __fvs_cosh_fma4       , __gs_cosh_4_p         ,__math_dispatch_error)
MTHINTRIN(cosh , dv2  , avxfma4    , __fvd_cosh_fma4       , __fvd_cosh_fma4       , __gd_cosh_2_p         ,__math_dispatch_error)
MTHINTRIN(cosh , sv8  , avxfma4    , __fvs_cosh_fma4_256   , __fvs_cosh_fma4_256   , __gs_cosh_8_p         ,__math_dispatch_error)
MTHINTRIN(cosh , dv4  , avxfma4    , __fvd_cosh_fma4_256   , __fvd_cosh_fma4_256   , __gd_cosh_4_p         ,__math_dispatch_error)
MTHINTRIN(cosh , sv4m , avxfma4    , __fs_cosh_4_mn        , __rs_cosh_4_mn        , __ps_cosh_4_mn        ,__math_dispatch_error)
MTHINTRIN(cosh , dv2m , avxfma4    , __fd_cosh_2_mn        , __rd_cosh_2_mn        , __pd_cosh_2_mn        ,__math_dispatch_error)
MTHINTRIN(cosh , sv8m , avxfma4    , __fs_cosh_8_mn        , __rs_cosh_8_mn        , __ps_cosh_8_mn        ,__math_dispatch_error)
MTHINTRIN(cosh , dv4m , avxfma4    , __fd_cosh_4_mn        , __rd_cosh_4_mn        , __pd_cosh_4_mn        ,__math_dispatch_error)

MTHINTRIN(cosh , ss   , avx2       , __fss_cosh_avx2       , __fss_cosh_avx2       , __mth_i_cosh_avx2     ,__math_dispatch_error)
MTHINTRIN(cosh , ds   , avx2       , __fsd_cosh_avx2       , __fsd_cosh_avx2       , __mth_i_dcosh_avx2    ,__math_dispatch_error)
MTHINTRIN(cosh , sv4  , avx2       , __fvs_cosh_avx2       , __fvs_cosh_avx2       , __gs_cosh_4_p         ,__math_dispatch_error)
MTHINTRIN(cosh , dv2  , avx2       , __fvd_cosh_avx2       , __fvd_cosh_avx2       , __gd_cosh_2_p         ,__math_dispatch_error)
MTHINTRIN(cosh , sv8  , avx2       , __fvs_cosh_avx2_256   , __fvs_cosh_vex_256    , __gs_cosh_8_p         ,__math_dispatch_error)
MTHINTRIN(cosh , dv4  , avx2       , __fvd_cosh_avx2_256   , __fvd_cosh_avx2_256   , __gd_cosh_4_p         ,__math_dispatch_error)
MTHINTRIN(cosh , sv4m , avx2       , __fs_cosh_4_mn        , __rs_cosh_4_mn        , __ps_cosh_4_mn        ,__math_dispatch_error)
MTHINTRIN(cosh , dv2m , avx2       , __fd_cosh_2_mn        , __rd_cosh_2_mn        , __pd_cosh_2_mn        ,__math_dispatch_error)
MTHINTRIN(cosh , sv8m , avx2       , __fs_cosh_8_mn        , __rs_cosh_8_mn        , __ps_cosh_8_mn        ,__math_dispatch_error)
MTHINTRIN(cosh , dv4m , avx2       , __fd_cosh_4_mn        , __rd_cosh_4_mn        , __pd_cosh_4_mn        ,__math_dispatch_error)

MTHINTRIN(cosh , ss   , avx512knl  , __fss_cosh_avx2       , __fss_cosh_avx2       , __mth_i_cosh_avx2     ,__math_dispatch_error)
MTHINTRIN(cosh , ds   , avx512knl  , __fsd_cosh_avx2       , __fsd_cosh_avx2       , __mth_i_dcosh_avx2    ,__math_dispatch_error)
MTHINTRIN(cosh , sv4  , avx512knl  , __fvs_cosh_avx2       , __fvs_cosh_avx2       , __gs_cosh_4_p         ,__math_dispatch_error)
MTHINTRIN(cosh , dv2  , avx512knl  , __fvd_cosh_avx2       , __fvd_cosh_avx2       , __gd_cosh_2_p         ,__math_dispatch_error)
MTHINTRIN(cosh , sv8  , avx512knl  , __fvs_cosh_avx2_256   , __fvs_cosh_vex_256    , __gs_cosh_8_p         ,__math_dispatch_error)
MTHINTRIN(cosh , dv4  , avx512knl  , __fvd_cosh_avx2_256   , __fvd_cosh_avx2_256   , __gd_cosh_4_p         ,__math_dispatch_error)
MTHINTRIN(cosh , sv16 , avx512knl  , __fs_cosh_16_z2yy     , __rs_cosh_16_z2yy     , __gs_cosh_16_p        ,__math_dispatch_error)
MTHINTRIN(cosh , dv8  , avx512knl  , __fd_cosh_8_z2yy      , __rd_cosh_8_z2yy      , __gd_cosh_8_p         ,__math_dispatch_error)
MTHINTRIN(cosh , sv4m , avx512knl  , __fs_cosh_4_mn        , __rs_cosh_4_mn        , __ps_cosh_4_mn        ,__math_dispatch_error)
MTHINTRIN(cosh , dv2m , avx512knl  , __fd_cosh_2_mn        , __rd_cosh_2_mn        , __pd_cosh_2_mn        ,__math_dispatch_error)
MTHINTRIN(cosh , sv8m , avx512knl  , __fs_cosh_8_mn        , __rs_cosh_8_mn        , __ps_cosh_8_mn        ,__math_dispatch_error)
MTHINTRIN(cosh , dv4m , avx512knl  , __fd_cosh_4_mn        , __rd_cosh_4_mn        , __pd_cosh_4_mn        ,__math_dispatch_error)
MTHINTRIN(cosh , sv16m, avx512knl  , __fs_cosh_16_mn       , __rs_cosh_16_mn       , __ps_cosh_16_mn       ,__math_dispatch_error)
MTHINTRIN(cosh , dv8m , avx512knl  , __fd_cosh_8_mn        , __rd_cosh_8_mn        , __pd_cosh_8_mn        ,__math_dispatch_error)

MTHINTRIN(cosh , ss   , avx512     , __fss_cosh_avx2       , __fss_cosh_avx2       , __mth_i_cosh_avx2     ,__math_dispatch_error)
MTHINTRIN(cosh , ds   , avx512     , __fsd_cosh_avx2       , __fsd_cosh_avx2       , __mth_i_dcosh_avx2    ,__math_dispatch_error)
MTHINTRIN(cosh , sv4  , avx512     , __fvs_cosh_avx2       , __fvs_cosh_avx2       , __gs_cosh_4_p         ,__math_dispatch_error)
MTHINTRIN(cosh , dv2  , avx512     , __fvd_cosh_avx2       , __fvd_cosh_avx2       , __gd_cosh_2_p         ,__math_dispatch_error)
MTHINTRIN(cosh , sv8  , avx512     , __fvs_cosh_avx2_256   , __fvs_cosh_vex_256    , __gs_cosh_8_p         ,__math_dispatch_error)
MTHINTRIN(cosh , dv4  , avx512     , __fvd_cosh_avx2_256   , __fvd_cosh_avx2_256   , __gd_cosh_4_p         ,__math_dispatch_error)
MTHINTRIN(cosh , sv16 , avx512     , __fs_cosh_16_z2yy     , __rs_cosh_16_z2yy     , __gs_cosh_16_p        ,__math_dispatch_error)
MTHINTRIN(cosh , dv8  , avx512     , __fd_cosh_8_z2yy      , __rd_cosh_8_z2yy      , __gd_cosh_8_p         ,__math_dispatch_error)
MTHINTRIN(cosh , sv4m , avx512     , __fs_cosh_4_mn        , __rs_cosh_4_mn        , __ps_cosh_4_mn        ,__math_dispatch_error)
MTHINTRIN(cosh , dv2m , avx512     , __fd_cosh_2_mn        , __rd_cosh_2_mn        , __pd_cosh_2_mn        ,__math_dispatch_error)
MTHINTRIN(cosh , sv8m , avx512     , __fs_cosh_8_mn        , __rs_cosh_8_mn        , __ps_cosh_8_mn        ,__math_dispatch_error)
MTHINTRIN(cosh , dv4m , avx512     , __fd_cosh_4_mn        , __rd_cosh_4_mn        , __pd_cosh_4_mn        ,__math_dispatch_error)
MTHINTRIN(cosh , sv16m, avx512     , __fs_cosh_16_mn       , __rs_cosh_16_mn       , __ps_cosh_16_mn       ,__math_dispatch_error)
MTHINTRIN(cosh , dv8m , avx512     , __fd_cosh_8_mn        , __rd_cosh_8_mn        , __pd_cosh_8_mn        ,__math_dispatch_error)

MTHINTRIN(cosh , zv1  , em64t      , __gz_cosh_1v_f        , __gz_cosh_1v_r        , __gz_cosh_1v_p        ,__math_dispatch_error)
MTHINTRIN(cosh , cv2  , em64t      , __gc_cosh_2_f         , __gc_cosh_2_r         , __gc_cosh_2_p         ,__math_dispatch_error)
MTHINTRIN(cosh , zv1  , sse4       , __gz_cosh_1v_f        , __gz_cosh_1v_r        , __gz_cosh_1v_p        ,__math_dispatch_error)
MTHINTRIN(cosh , cv2  , sse4       , __gc_cosh_2_f         , __gc_cosh_2_r         , __gc_cosh_2_p         ,__math_dispatch_error)
MTHINTRIN(cosh , zv1  , avx        , __gz_cosh_1v_f        , __gz_cosh_1v_r        , __gz_cosh_1v_p        ,__math_dispatch_error)
MTHINTRIN(cosh , cv2  , avx        , __gc_cosh_2_f         , __gc_cosh_2_r         , __gc_cosh_2_p         ,__math_dispatch_error)
MTHINTRIN(cosh , cv4  , avx        , __gc_cosh_4_f         , __gc_cosh_4_r         , __gc_cosh_4_p         ,__math_dispatch_error)
MTHINTRIN(cosh , zv2  , avx        , __gz_cosh_2_f         , __gz_cosh_2_r         , __gz_cosh_2_p         ,__math_dispatch_error)
MTHINTRIN(cosh , zv1  , avxfma4    , __gz_cosh_1v_f        , __gz_cosh_1v_r        , __gz_cosh_1v_p        ,__math_dispatch_error)
MTHINTRIN(cosh , cv2  , avxfma4    , __gc_cosh_2_f         , __gc_cosh_2_r         , __gc_cosh_2_p         ,__math_dispatch_error)
MTHINTRIN(cosh , cv4  , avxfma4    , __gc_cosh_4_f         , __gc_cosh_4_r         , __gc_cosh_4_p         ,__math_dispatch_error)
MTHINTRIN(cosh , zv2  , avxfma4    , __gz_cosh_2_f         , __gz_cosh_2_r         , __gz_cosh_2_p         ,__math_dispatch_error)
MTHINTRIN(cosh , zv1  , avx2       , __gz_cosh_1v_f        , __gz_cosh_1v_r        , __gz_cosh_1v_p        ,__math_dispatch_error)
MTHINTRIN(cosh , cv2  , avx2       , __gc_cosh_2_f         , __gc_cosh_2_r         , __gc_cosh_2_p         ,__math_dispatch_error)
MTHINTRIN(cosh , cv4  , avx2       , __gc_cosh_4_f         , __gc_cosh_4_r         , __gc_cosh_4_p         ,__math_dispatch_error)
MTHINTRIN(cosh , zv2  , avx2       , __gz_cosh_2_f         , __gz_cosh_2_r         , __gz_cosh_2_p         ,__math_dispatch_error)
MTHINTRIN(cosh , zv1  , avx512knl  , __gz_cosh_1v_f        , __gz_cosh_1v_r        , __gz_cosh_1v_p        ,__math_dispatch_error)
MTHINTRIN(cosh , cv2  , avx512knl  , __gc_cosh_2_f         , __gc_cosh_2_r         , __gc_cosh_2_p         ,__math_dispatch_error)
MTHINTRIN(cosh , cv4  , avx512knl  , __gc_cosh_4_f         , __gc_cosh_4_r         , __gc_cosh_4_p         ,__math_dispatch_error)
MTHINTRIN(cosh , cv8  , avx512knl  , __gc_cosh_8_f         , __gc_cosh_8_r         , __gc_cosh_8_p         ,__math_dispatch_error)
MTHINTRIN(cosh , zv2  , avx512knl  , __gz_cosh_2_f         , __gz_cosh_2_r         , __gz_cosh_2_p         ,__math_dispatch_error)
MTHINTRIN(cosh , zv4  , avx512knl  , __gz_cosh_4_f         , __gz_cosh_4_r         , __gz_cosh_4_p         ,__math_dispatch_error)
MTHINTRIN(cosh , zv1  , avx512     , __gz_cosh_1v_f        , __gz_cosh_1v_r        , __gz_cosh_1v_p        ,__math_dispatch_error)
MTHINTRIN(cosh , cv2  , avx512     , __gc_cosh_2_f         , __gc_cosh_2_r         , __gc_cosh_2_p         ,__math_dispatch_error)
MTHINTRIN(cosh , cv4  , avx512     , __gc_cosh_4_f         , __gc_cosh_4_r         , __gc_cosh_4_p         ,__math_dispatch_error)
MTHINTRIN(cosh , cv8  , avx512     , __gc_cosh_8_f         , __gc_cosh_8_r         , __gc_cosh_8_p         ,__math_dispatch_error)
MTHINTRIN(cosh , zv2  , avx512     , __gz_cosh_2_f         , __gz_cosh_2_r         , __gz_cosh_2_p         ,__math_dispatch_error)
MTHINTRIN(cosh , zv4  , avx512     , __gz_cosh_4_f         , __gz_cosh_4_r         , __gz_cosh_4_p         ,__math_dispatch_error)
