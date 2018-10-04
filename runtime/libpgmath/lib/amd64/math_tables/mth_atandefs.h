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

MTHINTRIN(atan , ss   , em64t      , __mth_i_atan          , __mth_i_atan          , __mth_i_atan          ,__math_dispatch_error)
MTHINTRIN(atan , ds   , em64t      , __mth_i_datan         , __mth_i_datan         , __mth_i_datan         ,__math_dispatch_error)
MTHINTRIN(atan , sv4  , em64t      , __fvsatan             , __fvsatan             , __gs_atan_4_p         ,__math_dispatch_error)
MTHINTRIN(atan , dv2  , em64t      , __fvdatan             , __fvdatan             , __gd_atan_2_p         ,__math_dispatch_error)
MTHINTRIN(atan , sv4m , em64t      , __fs_atan_4_mn        , __rs_atan_4_mn        , __ps_atan_4_mn        ,__math_dispatch_error)
MTHINTRIN(atan , dv2m , em64t      , __fd_atan_2_mn        , __rd_atan_2_mn        , __pd_atan_2_mn        ,__math_dispatch_error)

MTHINTRIN(atan , ss   , sse4       , __mth_i_atan          , __mth_i_atan          , __mth_i_atan          ,__math_dispatch_error)
MTHINTRIN(atan , ds   , sse4       , __mth_i_datan         , __mth_i_datan         , __mth_i_datan         ,__math_dispatch_error)
MTHINTRIN(atan , sv4  , sse4       , __fvsatan             , __fvsatan             , __gs_atan_4_p         ,__math_dispatch_error)
MTHINTRIN(atan , dv2  , sse4       , __fvdatan             , __fvdatan             , __gd_atan_2_p         ,__math_dispatch_error)
MTHINTRIN(atan , sv4m , sse4       , __fs_atan_4_mn        , __rs_atan_4_mn        , __ps_atan_4_mn        ,__math_dispatch_error)
MTHINTRIN(atan , dv2m , sse4       , __fd_atan_2_mn        , __rd_atan_2_mn        , __pd_atan_2_mn        ,__math_dispatch_error)

MTHINTRIN(atan , ss   , avx        , __mth_i_atan          , __mth_i_atan          , __mth_i_atan          ,__math_dispatch_error)
MTHINTRIN(atan , ds   , avx        , __mth_i_datan         , __mth_i_datan         , __mth_i_datan         ,__math_dispatch_error)
MTHINTRIN(atan , sv4  , avx        , __fvs_atan            , __fvs_atan            , __gs_atan_4_p         ,__math_dispatch_error)
MTHINTRIN(atan , dv2  , avx        , __fvd_atan            , __fvd_atan            , __gd_atan_2_p         ,__math_dispatch_error)
MTHINTRIN(atan , sv8  , avx        , __fvs_atan_256        , __fvs_atan_256        , __gs_atan_8_p         ,__math_dispatch_error)
MTHINTRIN(atan , dv4  , avx        , __fvd_atan_256        , __fvd_atan_256        , __gd_atan_4_p         ,__math_dispatch_error)
MTHINTRIN(atan , sv4m , avx        , __fs_atan_4_mn        , __rs_atan_4_mn        , __ps_atan_4_mn        ,__math_dispatch_error)
MTHINTRIN(atan , dv2m , avx        , __fd_atan_2_mn        , __rd_atan_2_mn        , __pd_atan_2_mn        ,__math_dispatch_error)
MTHINTRIN(atan , sv8m , avx        , __fs_atan_8_mn        , __rs_atan_8_mn        , __ps_atan_8_mn        ,__math_dispatch_error)
MTHINTRIN(atan , dv4m , avx        , __fd_atan_4_mn        , __rd_atan_4_mn        , __pd_atan_4_mn        ,__math_dispatch_error)

MTHINTRIN(atan , ss   , avxfma4    , __mth_i_atan          , __mth_i_atan          , __mth_i_atan          ,__math_dispatch_error)
MTHINTRIN(atan , ds   , avxfma4    , __mth_i_datan         , __mth_i_datan         , __mth_i_datan         ,__math_dispatch_error)
MTHINTRIN(atan , sv4  , avxfma4    , __fvs_atan            , __fvs_atan            , __gs_atan_4_p         ,__math_dispatch_error)
MTHINTRIN(atan , dv2  , avxfma4    , __fvd_atan            , __fvd_atan            , __gd_atan_2_p         ,__math_dispatch_error)
MTHINTRIN(atan , sv8  , avxfma4    , __fvs_atan_256        , __fvs_atan_256        , __gs_atan_8_p         ,__math_dispatch_error)
MTHINTRIN(atan , dv4  , avxfma4    , __fvd_atan_256        , __fvd_atan_256        , __gd_atan_4_p         ,__math_dispatch_error)
MTHINTRIN(atan , sv4m , avxfma4    , __fs_atan_4_mn        , __rs_atan_4_mn        , __ps_atan_4_mn        ,__math_dispatch_error)
MTHINTRIN(atan , dv2m , avxfma4    , __fd_atan_2_mn        , __rd_atan_2_mn        , __pd_atan_2_mn        ,__math_dispatch_error)
MTHINTRIN(atan , sv8m , avxfma4    , __fs_atan_8_mn        , __rs_atan_8_mn        , __ps_atan_8_mn        ,__math_dispatch_error)
MTHINTRIN(atan , dv4m , avxfma4    , __fd_atan_4_mn        , __rd_atan_4_mn        , __pd_atan_4_mn        ,__math_dispatch_error)

MTHINTRIN(atan , ss   , avx2       , __fss_atan_fma3       , __fss_atan_fma3       , __mth_i_atan_avx2     ,__math_dispatch_error)
MTHINTRIN(atan , ds   , avx2       , __mth_i_datan_avx2    , __mth_i_datan_avx2    , __mth_i_datan_avx2    ,__math_dispatch_error)
MTHINTRIN(atan , sv4  , avx2       , __fvs_atan_fma3       , __fvs_atan_fma3       , __gs_atan_4_p         ,__math_dispatch_error)
MTHINTRIN(atan , dv2  , avx2       , __gd_atan_2_f         , __gd_atan_2_r         , __gd_atan_2_p         ,__math_dispatch_error)
MTHINTRIN(atan , sv8  , avx2       , __fvs_atan_fma3_256   , __fvs_atan_fma3_256   , __gs_atan_8_p         ,__math_dispatch_error)
MTHINTRIN(atan , dv4  , avx2       , __gd_atan_4_f         , __gd_atan_4_r         , __gd_atan_4_p         ,__math_dispatch_error)
MTHINTRIN(atan , sv4m , avx2       , __fs_atan_4_mn        , __rs_atan_4_mn        , __ps_atan_4_mn        ,__math_dispatch_error)
MTHINTRIN(atan , dv2m , avx2       , __fd_atan_2_mn        , __rd_atan_2_mn        , __pd_atan_2_mn        ,__math_dispatch_error)
MTHINTRIN(atan , sv8m , avx2       , __fs_atan_8_mn        , __rs_atan_8_mn        , __ps_atan_8_mn        ,__math_dispatch_error)
MTHINTRIN(atan , dv4m , avx2       , __fd_atan_4_mn        , __rd_atan_4_mn        , __pd_atan_4_mn        ,__math_dispatch_error)

MTHINTRIN(atan , ss   , avx512knl  , __fss_atan_fma3       , __fss_atan_fma3       , __mth_i_atan_avx2     ,__math_dispatch_error)
MTHINTRIN(atan , ds   , avx512knl  , __mth_i_datan_avx2    , __mth_i_datan_avx2    , __mth_i_datan_avx2    ,__math_dispatch_error)
MTHINTRIN(atan , sv4  , avx512knl  , __fvs_atan_fma3       , __fvs_atan_fma3       , __gs_atan_4_p         ,__math_dispatch_error)
MTHINTRIN(atan , dv2  , avx512knl  , __gd_atan_2_f         , __gd_atan_2_r         , __gd_atan_2_p         ,__math_dispatch_error)
MTHINTRIN(atan , sv8  , avx512knl  , __fvs_atan_fma3_256   , __fvs_atan_fma3_256   , __gs_atan_8_p         ,__math_dispatch_error)
MTHINTRIN(atan , dv4  , avx512knl  , __gd_atan_4_f         , __gd_atan_4_r         , __gd_atan_4_p         ,__math_dispatch_error)
MTHINTRIN(atan , sv16 , avx512knl  , __fvs_atan_fma3_knl   , __fvs_atan_fma3_knl   , __gs_atan_16_p        ,__math_dispatch_error)
MTHINTRIN(atan , dv8  , avx512knl  , __gd_atan_8_f         , __gd_atan_8_r         , __gd_atan_8_p         ,__math_dispatch_error)
MTHINTRIN(atan , sv4m , avx512knl  , __fs_atan_4_mn        , __rs_atan_4_mn        , __ps_atan_4_mn        ,__math_dispatch_error)
MTHINTRIN(atan , dv2m , avx512knl  , __fd_atan_2_mn        , __rd_atan_2_mn        , __pd_atan_2_mn        ,__math_dispatch_error)
MTHINTRIN(atan , sv8m , avx512knl  , __fs_atan_8_mn        , __rs_atan_8_mn        , __ps_atan_8_mn        ,__math_dispatch_error)
MTHINTRIN(atan , dv4m , avx512knl  , __fd_atan_4_mn        , __rd_atan_4_mn        , __pd_atan_4_mn        ,__math_dispatch_error)
MTHINTRIN(atan , sv16m, avx512knl  , __fs_atan_16_mn       , __rs_atan_16_mn       , __ps_atan_16_mn       ,__math_dispatch_error)
MTHINTRIN(atan , dv8m , avx512knl  , __fd_atan_8_mn        , __rd_atan_8_mn        , __pd_atan_8_mn        ,__math_dispatch_error)

MTHINTRIN(atan , ss   , avx512     , __fss_atan_fma3       , __fss_atan_fma3       , __mth_i_atan_avx2     ,__math_dispatch_error)
MTHINTRIN(atan , ds   , avx512     , __mth_i_datan_avx2    , __mth_i_datan_avx2    , __mth_i_datan_avx2    ,__math_dispatch_error)
MTHINTRIN(atan , sv4  , avx512     , __fvs_atan_fma3       , __fvs_atan_fma3       , __gs_atan_4_p         ,__math_dispatch_error)
MTHINTRIN(atan , dv2  , avx512     , __gd_atan_2_f         , __gd_atan_2_r         , __gd_atan_2_p         ,__math_dispatch_error)
MTHINTRIN(atan , sv8  , avx512     , __fvs_atan_fma3_256   , __fvs_atan_fma3_256   , __gs_atan_8_p         ,__math_dispatch_error)
MTHINTRIN(atan , dv4  , avx512     , __gd_atan_4_f         , __gd_atan_4_r         , __gd_atan_4_p         ,__math_dispatch_error)
MTHINTRIN(atan , sv16 , avx512     , __fvs_atan_fma3_512   , __fvs_atan_fma3_512   , __gs_atan_16_p        ,__math_dispatch_error)
MTHINTRIN(atan , dv8  , avx512     , __gd_atan_8_f         , __gd_atan_8_r         , __gd_atan_8_p         ,__math_dispatch_error)
MTHINTRIN(atan , sv4m , avx512     , __fs_atan_4_mn        , __rs_atan_4_mn        , __ps_atan_4_mn        ,__math_dispatch_error)
MTHINTRIN(atan , dv2m , avx512     , __fd_atan_2_mn        , __rd_atan_2_mn        , __pd_atan_2_mn        ,__math_dispatch_error)
MTHINTRIN(atan , sv8m , avx512     , __fs_atan_8_mn        , __rs_atan_8_mn        , __ps_atan_8_mn        ,__math_dispatch_error)
MTHINTRIN(atan , dv4m , avx512     , __fd_atan_4_mn        , __rd_atan_4_mn        , __pd_atan_4_mn        ,__math_dispatch_error)
MTHINTRIN(atan , sv16m, avx512     , __fs_atan_16_mn       , __rs_atan_16_mn       , __ps_atan_16_mn       ,__math_dispatch_error)
MTHINTRIN(atan , dv8m , avx512     , __fd_atan_8_mn        , __rd_atan_8_mn        , __pd_atan_8_mn        ,__math_dispatch_error)

MTHINTRIN(atan , zv1  , em64t      , __gz_atan_1v_f        , __gz_atan_1v_r        , __gz_atan_1v_p        ,__math_dispatch_error)
MTHINTRIN(atan , cv2  , em64t      , __gc_atan_2_f         , __gc_atan_2_r         , __gc_atan_2_p         ,__math_dispatch_error)
MTHINTRIN(atan , zv1  , sse4       , __gz_atan_1v_f        , __gz_atan_1v_r        , __gz_atan_1v_p        ,__math_dispatch_error)
MTHINTRIN(atan , cv2  , sse4       , __gc_atan_2_f         , __gc_atan_2_r         , __gc_atan_2_p         ,__math_dispatch_error)
MTHINTRIN(atan , zv1  , avx        , __gz_atan_1v_f        , __gz_atan_1v_r        , __gz_atan_1v_p        ,__math_dispatch_error)
MTHINTRIN(atan , cv2  , avx        , __gc_atan_2_f         , __gc_atan_2_r         , __gc_atan_2_p         ,__math_dispatch_error)
MTHINTRIN(atan , cv4  , avx        , __gc_atan_4_f         , __gc_atan_4_r         , __gc_atan_4_p         ,__math_dispatch_error)
MTHINTRIN(atan , zv2  , avx        , __gz_atan_2_f         , __gz_atan_2_r         , __gz_atan_2_p         ,__math_dispatch_error)
MTHINTRIN(atan , zv1  , avxfma4    , __gz_atan_1v_f        , __gz_atan_1v_r        , __gz_atan_1v_p        ,__math_dispatch_error)
MTHINTRIN(atan , cv2  , avxfma4    , __gc_atan_2_f         , __gc_atan_2_r         , __gc_atan_2_p         ,__math_dispatch_error)
MTHINTRIN(atan , cv4  , avxfma4    , __gc_atan_4_f         , __gc_atan_4_r         , __gc_atan_4_p         ,__math_dispatch_error)
MTHINTRIN(atan , zv2  , avxfma4    , __gz_atan_2_f         , __gz_atan_2_r         , __gz_atan_2_p         ,__math_dispatch_error)
MTHINTRIN(atan , zv1  , avx2       , __gz_atan_1v_f        , __gz_atan_1v_r        , __gz_atan_1v_p        ,__math_dispatch_error)
MTHINTRIN(atan , cv2  , avx2       , __gc_atan_2_f         , __gc_atan_2_r         , __gc_atan_2_p         ,__math_dispatch_error)
MTHINTRIN(atan , cv4  , avx2       , __gc_atan_4_f         , __gc_atan_4_r         , __gc_atan_4_p         ,__math_dispatch_error)
MTHINTRIN(atan , zv2  , avx2       , __gz_atan_2_f         , __gz_atan_2_r         , __gz_atan_2_p         ,__math_dispatch_error)
MTHINTRIN(atan , zv1  , avx512knl  , __gz_atan_1v_f        , __gz_atan_1v_r        , __gz_atan_1v_p        ,__math_dispatch_error)
MTHINTRIN(atan , cv2  , avx512knl  , __gc_atan_2_f         , __gc_atan_2_r         , __gc_atan_2_p         ,__math_dispatch_error)
MTHINTRIN(atan , cv4  , avx512knl  , __gc_atan_4_f         , __gc_atan_4_r         , __gc_atan_4_p         ,__math_dispatch_error)
MTHINTRIN(atan , cv8  , avx512knl  , __gc_atan_8_f         , __gc_atan_8_r         , __gc_atan_8_p         ,__math_dispatch_error)
MTHINTRIN(atan , zv2  , avx512knl  , __gz_atan_2_f         , __gz_atan_2_r         , __gz_atan_2_p         ,__math_dispatch_error)
MTHINTRIN(atan , zv4  , avx512knl  , __gz_atan_4_f         , __gz_atan_4_r         , __gz_atan_4_p         ,__math_dispatch_error)
MTHINTRIN(atan , zv1  , avx512     , __gz_atan_1v_f        , __gz_atan_1v_r        , __gz_atan_1v_p        ,__math_dispatch_error)
MTHINTRIN(atan , cv2  , avx512     , __gc_atan_2_f         , __gc_atan_2_r         , __gc_atan_2_p         ,__math_dispatch_error)
MTHINTRIN(atan , cv4  , avx512     , __gc_atan_4_f         , __gc_atan_4_r         , __gc_atan_4_p         ,__math_dispatch_error)
MTHINTRIN(atan , cv8  , avx512     , __gc_atan_8_f         , __gc_atan_8_r         , __gc_atan_8_p         ,__math_dispatch_error)
MTHINTRIN(atan , zv2  , avx512     , __gz_atan_2_f         , __gz_atan_2_r         , __gz_atan_2_p         ,__math_dispatch_error)
MTHINTRIN(atan , zv4  , avx512     , __gz_atan_4_f         , __gz_atan_4_r         , __gz_atan_4_p         ,__math_dispatch_error)
