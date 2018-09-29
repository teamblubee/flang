#
# Copyright (c) 2015-2018, NVIDIA CORPORATION.  All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set (RUNTIME_SHARED_DIR ${CMAKE_CURRENT_SOURCE_DIR}/shared)

add_definitions(
 -DMAXCPUS=256 
 -DMAXCPUSL=8 
 -DMAXCPUSR=8 
 -DTARGET_LLVM 
 -DPGF90 
 -DPGFLANG
 -DNATIVE_FPCVT
 -DPGI_LITTLE_ENDIAN
)
# MESSAGE(FATAL_ERROR "${TARGET_ARCHITECTURE} ${TARGET_OS}")
if( ${TARGET_ARCHITECTURE} STREQUAL "x86_64|amd64" )
  if( ${TARGET_OS} STREQUAL "Linux" )
  add_definitions(
   -DLINUX 
   -DTARGET_LINUX 
   -DTARGET_X8664
   -DTARGET_LINUX_X8664
  )
  elseif( ${TARGET_OS} STREQUAL "FreeBSD" )
  add_definitions(
   -DFREEBSD 
   -DTARGET_FREEBSD 
   -DTARGET_X8664
   -DTARGET_FREEBSD_X8664
  )
  endif()
elseif( ${TARGET_ARCHITECTURE} STREQUAL "aarch64" )
  if( ${TARGET_OS} STREQUAL "Linux" )
  add_definitions(
   -DLINUX 
   -DTARGET_LINUX 
   -DTARGET_LLVM_ARM64
   -DTARGET_LINUX_ARM
  )
  elseif( ${TARGET_OS} STREQUAL "FreeBSD" )
  add_definitions(
   -DFREEBSD 
   -DTARGET_FREEBSD 
   -DTARGET_LLVM_ARM64
   -DTARGET_FREEBSD_ARM
  )
  endif()
elseif( ${TARGET_ARCHITECTURE} STREQUAL "ppc64le" )
  if( ${TARGET_OS} STREQUAL "Linux" )
  add_definitions(
    -DLINUX 
    -DTARGET_LINUX 
    -DTARGET_LINUX_POWER
    -DLINUX_POWER
  )
  elseif( ${TARGET_OS} STREQUAL "FreeBSD" )
  add_definitions(
    -DFREEBSD 
    -DTARGET_FREEBSD 
    -DTARGET_FREEBSD_POWER
    -DLINUX_POWER
  )
  endif()
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(ompstub)

add_subdirectory(flangrti)
add_subdirectory(flang)
add_subdirectory(flangmain)
