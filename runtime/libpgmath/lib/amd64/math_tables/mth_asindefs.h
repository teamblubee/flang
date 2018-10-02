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

MTHINTRIN(asin , ss   , em64t      , __mth_i_asin          , __mth_i_asin          , __mth_i_asin          ,__math_dispatch_error)
MTHINTRIN(asin , ds   , em64t      , __mth_i_dasin         , __mth_i_dasin         , __mth_i_dasin         ,__math_dispatch_error)
MTHINTRIN(asin , sv4  , em64t      , __fvsasin             , __fvsasin             , __gs_asin_4_p         ,__math_dispatch_error)
MTHINTRIN(asin , dv2  , em64t      , __fvdasin             , __fvdasin             , __gd_asin_2_p         ,__math_dispatch_error)
MTHINTRIN(asin , sv4m , em64t      , __fs_asin_4_mn        , __rs_asin_4_mn        , __ps_asin_4_mn        ,__math_dispatch_error)
MTHINTRIN(asin , dv2m , em64t      , __fd_asin_2_mn        , __rd_asin_2_mn        , __pd_asin_2_mn        ,__math_dispatch_error)

MTHINTRIN(asin , ss   , sse4       , __mth_i_asin          , __mth_i_asin          , __mth_i_asin          ,__math_dispatch_error)
MTHINTRIN(asin , ds   , sse4       , __mth_i_dasin         , __mth_i_dasin         , __mth_i_dasin         ,__math_dispatch_error)
MTHINTRIN(asin , sv4  , sse4       , __fvsasin             , __fvsasin             , __gs_asin_4_p         ,__math_dispatch_error)
MTHINTRIN(asin , dv2  , sse4       , __fvdasin             , __fvdasin             , __gd_asin_2_p         ,__math_dispatch_error)
MTHINTRIN(asin , sv4m , sse4       , __fs_asin_4_mn        , __rs_asin_4_mn        , __ps_asin_4_mn        ,__math_dispatch_error)
MTHINTRIN(asin , dv2m , sse4       , __fd_asin_2_mn        , __rd_asin_2_mn        , __pd_asin_2_mn        ,__math_dispatch_error)

MTHINTRIN(asin , ss   , avx        , __mth_i_asin          , __mth_i_asin          , __mth_i_asin          ,__math_dispatch_error)
MTHINTRIN(asin , ds   , avx        , __mth_i_dasin         , __mth_i_dasin         , __mth_i_dasin         ,__math_dispatch_error)
MTHINTRIN(asin , sv4  , avx        , __fvs_asin            , __fvs_asin            , __gs_asin_4_p         ,__math_dispatch_error)
MTHINTRIN(asin , dv2  , avx        , __fvd_asin            , __fvd_asin            , __gd_asin_2_p         ,__math_dispatch_error)
MTHINTRIN(asin , sv8  , avx        , __fvs_asin_256        , __fvs_asin_256        , __gs_asin_8_p         ,__math_dispatch_error)
MTHINTRIN(asin , dv4  , avx        , __fvd_asin_256        , __fvd_asin_256        , __gd_asin_4_p         ,__math_dispatch_error)
MTHINTRIN(asin , sv4m , avx        , __fs_asin_4_mn        , __rs_asin_4_mn        , __ps_asin_4_mn        ,__math_dispatch_error)
MTHINTRIN(asin , dv2m , avx        , __fd_asin_2_mn        , __rd_asin_2_mn        , __pd_asin_2_mn        ,__math_dispatch_error)
MTHINTRIN(asin , sv8m , avx        , __fs_asin_8_mn        , __rs_asin_8_mn        , __ps_asin_8_mn        ,__math_dispatch_error)
MTHINTRIN(asin , dv4m , avx        , __fd_asin_4_mn        , __rd_asin_4_mn        , __pd_asin_4_mn        ,__math_dispatch_error)

MTHINTRIN(asin , ss   , avxfma4    , __mth_i_asin          , __mth_i_asin          , __mth_i_asin          ,__math_dispatch_error)
MTHINTRIN(asin , ds   , avxfma4    , __mth_i_dasin         , __mth_i_dasin         , __mth_i_dasin         ,__math_dispatch_error)
MTHINTRIN(asin , sv4  , avxfma4    , __fvs_asin            , __fvs_asin            , __gs_asin_4_p         ,__math_dispatch_error)
MTHINTRIN(asin , dv2  , avxfma4    , __fvd_asin            , __fvd_asin            , __gd_asin_2_p         ,__math_dispatch_error)
MTHINTRIN(asin , sv8  , avxfma4    , __fvs_asin_256        , __fvs_asin_256        , __gs_asin_8_p         ,__math_dispatch_error)
MTHINTRIN(asin , dv4  , avxfma4    , __fvd_asin_256        , __fvd_asin_256        , __gd_asin_4_p         ,__math_dispatch_error)
MTHINTRIN(asin , sv4m , avxfma4    , __fs_asin_4_mn        , __rs_asin_4_mn        , __ps_asin_4_mn        ,__math_dispatch_error)
MTHINTRIN(asin , dv2m , avxfma4    , __fd_asin_2_mn        , __rd_asin_2_mn        , __pd_asin_2_mn        ,__math_dispatch_error)
MTHINTRIN(asin , sv8m , avxfma4    , __fs_asin_8_mn        , __rs_asin_8_mn        , __ps_asin_8_mn        ,__math_dispatch_error)
MTHINTRIN(asin , dv4m , avxfma4    , __fd_asin_4_mn        , __rd_asin_4_mn        , __pd_asin_4_mn        ,__math_dispatch_error)

MTHINTRIN(asin , ss   , avx2       , __fss_asin_fma3       , __fss_asin_fma3       , __mth_i_asin          ,__math_dispatch_error)
MTHINTRIN(asin , ds   , avx2       , __fsd_asin_fma3       , __fsd_asin_fma3       , __mth_i_dasin         ,__math_dispatch_error)
MTHINTRIN(asin , sv4  , avx2       , __fvs_asin_fma3       , __fvs_asin_fma3       , __gs_asin_4_p         ,__math_dispatch_error)
MTHINTRIN(asin , dv2  , avx2       , __fvd_asin_fma3       , __fvd_asin_fma3       , __gd_asin_2_p         ,__math_dispatch_error)
MTHINTRIN(asin , sv8  , avx2       , __fvs_asin_fma3_256   , __fvs_asin_fma3_256   , __gs_asin_8_p         ,__math_dispatch_error)
MTHINTRIN(asin , dv4  , avx2       , __fvd_asin_fma3_256   , __fvd_asin_fma3_256   , __gd_asin_4_p         ,__math_dispatch_error)
MTHINTRIN(asin , sv4m , avx2       , __fs_asin_4_mn        , __rs_asin_4_mn        , __ps_asin_4_mn        ,__math_dispatch_error)
MTHINTRIN(asin , dv2m , avx2       , __fd_asin_2_mn        , __rd_asin_2_mn        , __pd_asin_2_mn        ,__math_dispatch_error)
MTHINTRIN(asin , sv8m , avx2       , __fs_asin_8_mn        , __rs_asin_8_mn        , __ps_asin_8_mn        ,__math_dispatch_error)
MTHINTRIN(asin , dv4m , avx2       , __fd_asin_4_mn        , __rd_asin_4_mn        , __pd_asin_4_mn        ,__math_dispatch_error)

MTHINTRIN(asin , ss   , avx512knl  , __fss_asin_fma3       , __fss_asin_fma3       , __mth_i_asin          ,__math_dispatch_error)
MTHINTRIN(asin , ds   , avx512knl  , __fsd_asin_fma3       , __fsd_asin_fma3       , __mth_i_dasin         ,__math_dispatch_error)
MTHINTRIN(asin , sv4  , avx512knl  , __fvs_asin_fma3       , __fvs_asin_fma3       , __gs_asin_4_p         ,__math_dispatch_error)
MTHINTRIN(asin , dv2  , avx512knl  , __fvd_asin_fma3       , __fvd_asin_fma3       , __gd_asin_2_p         ,__math_dispatch_error)
MTHINTRIN(asin , sv8  , avx512knl  , __fvs_asin_fma3_256   , __fvs_asin_fma3_256   , __gs_asin_8_p         ,__math_dispatch_error)
MTHINTRIN(asin , dv4  , avx512knl  , __fvd_asin_fma3_256   , __fvd_asin_fma3_256   , __gd_asin_4_p         ,__math_dispatch_error)
MTHINTRIN(asin , sv16 , avx512knl  , __fvs_asin_fma3_knl   , __fvs_asin_fma3_knl   , __gs_asin_16_p        ,__math_dispatch_error)
MTHINTRIN(asin , dv8  , avx512knl  , __fvd_asin_fma3_knl   , __fvd_asin_fma3_knl   , __gd_asin_8_p         ,__math_dispatch_error)
MTHINTRIN(asin , sv4m , avx512knl  , __fs_asin_4_mn        , __rs_asin_4_mn        , __ps_asin_4_mn        ,__math_dispatch_error)
MTHINTRIN(asin , dv2m , avx512knl  , __fd_asin_2_mn        , __rd_asin_2_mn        , __pd_asin_2_mn        ,__math_dispatch_error)
MTHINTRIN(asin , sv8m , avx512knl  , __fs_asin_8_mn        , __rs_asin_8_mn        , __ps_asin_8_mn        ,__math_dispatch_error)
MTHINTRIN(asin , dv4m , avx512knl  , __fd_asin_4_mn        , __rd_asin_4_mn        , __pd_asin_4_mn        ,__math_dispatch_error)
MTHINTRIN(asin , sv16m, avx512knl  , __fs_asin_16_mn       , __rs_asin_16_mn       , __ps_asin_16_mn       ,__math_dispatch_error)
MTHINTRIN(asin , dv8m , avx512knl  , __fd_asin_8_mn        , __rd_asin_8_mn        , __pd_asin_8_mn        ,__math_dispatch_error)

MTHINTRIN(asin , ss   , avx512     , __fss_asin_fma3       , __fss_asin_fma3       , __mth_i_asin          ,__math_dispatch_error)
MTHINTRIN(asin , ds   , avx512     , __fsd_asin_fma3       , __fsd_asin_fma3       , __mth_i_dasin         ,__math_dispatch_error)
MTHINTRIN(asin , sv4  , avx512     , __fvs_asin_fma3       , __fvs_asin_fma3       , __gs_asin_4_p         ,__math_dispatch_error)
MTHINTRIN(asin , dv2  , avx512     , __fvd_asin_fma3       , __fvd_asin_fma3       , __gd_asin_2_p         ,__math_dispatch_error)
MTHINTRIN(asin , sv8  , avx512     , __fvs_asin_fma3_256   , __fvs_asin_fma3_256   , __gs_asin_8_p         ,__math_dispatch_error)
MTHINTRIN(asin , dv4  , avx512     , __fvd_asin_fma3_256   , __fvd_asin_fma3_256   , __gd_asin_4_p         ,__math_dispatch_error)
MTHINTRIN(asin , sv16 , avx512     , __fvs_asin_fma3_512   , __fvs_asin_fma3_512   , __gs_asin_16_p        ,__math_dispatch_error)
MTHINTRIN(asin , dv8  , avx512     , __fvd_asin_fma3_512   , __fvd_asin_fma3_512   , __gd_asin_8_p         ,__math_dispatch_error)
MTHINTRIN(asin , sv4m , avx512     , __fs_asin_4_mn        , __rs_asin_4_mn        , __ps_asin_4_mn        ,__math_dispatch_error)
MTHINTRIN(asin , dv2m , avx512     , __fd_asin_2_mn        , __rd_asin_2_mn        , __pd_asin_2_mn        ,__math_dispatch_error)
MTHINTRIN(asin , sv8m , avx512     , __fs_asin_8_mn        , __rs_asin_8_mn        , __ps_asin_8_mn        ,__math_dispatch_error)
MTHINTRIN(asin , dv4m , avx512     , __fd_asin_4_mn        , __rd_asin_4_mn        , __pd_asin_4_mn        ,__math_dispatch_error)
MTHINTRIN(asin , sv16m, avx512     , __fs_asin_16_mn       , __rs_asin_16_mn       , __ps_asin_16_mn       ,__math_dispatch_error)
MTHINTRIN(asin , dv8m , avx512     , __fd_asin_8_mn        , __rd_asin_8_mn        , __pd_asin_8_mn        ,__math_dispatch_error)

MTHINTRIN(asin , zv1  , em64t      , __gz_asin_1v_f        , __gz_asin_1v_r        , __gz_asin_1v_p        ,__math_dispatch_error)
MTHINTRIN(asin , cv2  , em64t      , __gc_asin_2_f         , __gc_asin_2_r         , __gc_asin_2_p         ,__math_dispatch_error)
MTHINTRIN(asin , zv1  , sse4       , __gz_asin_1v_f        , __gz_asin_1v_r        , __gz_asin_1v_p        ,__math_dispatch_error)
MTHINTRIN(asin , cv2  , sse4       , __gc_asin_2_f         , __gc_asin_2_r         , __gc_asin_2_p         ,__math_dispatch_error)
MTHINTRIN(asin , zv1  , avx        , __gz_asin_1v_f        , __gz_asin_1v_r        , __gz_asin_1v_p        ,__math_dispatch_error)
MTHINTRIN(asin , cv2  , avx        , __gc_asin_2_f         , __gc_asin_2_r         , __gc_asin_2_p         ,__math_dispatch_error)
MTHINTRIN(asin , cv4  , avx        , __gc_asin_4_f         , __gc_asin_4_r         , __gc_asin_4_p         ,__math_dispatch_error)
MTHINTRIN(asin , zv2  , avx        , __gz_asin_2_f         , __gz_asin_2_r         , __gz_asin_2_p         ,__math_dispatch_error)
MTHINTRIN(asin , zv1  , avxfma4    , __gz_asin_1v_f        , __gz_asin_1v_r        , __gz_asin_1v_p        ,__math_dispatch_error)
MTHINTRIN(asin , cv2  , avxfma4    , __gc_asin_2_f         , __gc_asin_2_r         , __gc_asin_2_p         ,__math_dispatch_error)
MTHINTRIN(asin , cv4  , avxfma4    , __gc_asin_4_f         , __gc_asin_4_r         , __gc_asin_4_p         ,__math_dispatch_error)
MTHINTRIN(asin , zv2  , avxfma4    , __gz_asin_2_f         , __gz_asin_2_r         , __gz_asin_2_p         ,__math_dispatch_error)
MTHINTRIN(asin , zv1  , avx2       , __gz_asin_1v_f        , __gz_asin_1v_r        , __gz_asin_1v_p        ,__math_dispatch_error)
MTHINTRIN(asin , cv2  , avx2       , __gc_asin_2_f         , __gc_asin_2_r         , __gc_asin_2_p         ,__math_dispatch_error)
MTHINTRIN(asin , cv4  , avx2       , __gc_asin_4_f         , __gc_asin_4_r         , __gc_asin_4_p         ,__math_dispatch_error)
MTHINTRIN(asin , zv2  , avx2       , __gz_asin_2_f         , __gz_asin_2_r         , __gz_asin_2_p         ,__math_dispatch_error)
MTHINTRIN(asin , zv1  , avx512knl  , __gz_asin_1v_f        , __gz_asin_1v_r        , __gz_asin_1v_p        ,__math_dispatch_error)
MTHINTRIN(asin , cv2  , avx512knl  , __gc_asin_2_f         , __gc_asin_2_r         , __gc_asin_2_p         ,__math_dispatch_error)
MTHINTRIN(asin , cv4  , avx512knl  , __gc_asin_4_f         , __gc_asin_4_r         , __gc_asin_4_p         ,__math_dispatch_error)
MTHINTRIN(asin , cv8  , avx512knl  , __gc_asin_8_f         , __gc_asin_8_r         , __gc_asin_8_p         ,__math_dispatch_error)
MTHINTRIN(asin , zv2  , avx512knl  , __gz_asin_2_f         , __gz_asin_2_r         , __gz_asin_2_p         ,__math_dispatch_error)
MTHINTRIN(asin , zv4  , avx512knl  , __gz_asin_4_f         , __gz_asin_4_r         , __gz_asin_4_p         ,__math_dispatch_error)
MTHINTRIN(asin , zv1  , avx512     , __gz_asin_1v_f        , __gz_asin_1v_r        , __gz_asin_1v_p        ,__math_dispatch_error)
MTHINTRIN(asin , cv2  , avx512     , __gc_asin_2_f         , __gc_asin_2_r         , __gc_asin_2_p         ,__math_dispatch_error)
MTHINTRIN(asin , cv4  , avx512     , __gc_asin_4_f         , __gc_asin_4_r         , __gc_asin_4_p         ,__math_dispatch_error)
MTHINTRIN(asin , cv8  , avx512     , __gc_asin_8_f         , __gc_asin_8_r         , __gc_asin_8_p         ,__math_dispatch_error)
MTHINTRIN(asin , zv2  , avx512     , __gz_asin_2_f         , __gz_asin_2_r         , __gz_asin_2_p         ,__math_dispatch_error)
MTHINTRIN(asin , zv4  , avx512     , __gz_asin_4_f         , __gz_asin_4_r         , __gz_asin_4_p         ,__math_dispatch_error)
