#
# Copyright (c) 2018, NVIDIA CORPORATION.  All rights reserved.
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

# This value will be the same as CMAKE_SYSTEM_PROCESSOR
set(PROCESSOR ${CMAKE_SYSTEM_PROCESSOR})
if(${LIBPGMATH_WITH_GENERIC} OR (NOT ${CMAKE_SYSTEM_PROCESSOR} MATCHES "x86_64|aarch64"))
  set(PROCESSOR "generic")
endif()

# MESSAGE(FATAL_ERROR "${CMAKE_SYSTEM_PROCESSOR} ${CMAKE_SYSTEM_NAME}")
set_property(GLOBAL APPEND PROPERTY "TARGET_OBJECTS")

if(${CMAKE_SYSTEM_PROCESSOR} MATCHES "x86_64|amd64" AND NOT ${LIBPGMATH_WITH_GENERIC})
  if(${CMAKE_SYSTEM_NAME} MATCHES "FreeBSD")
     MESSAGE(FATAL_ERROR "${CMAKE_SYSTEM_PROCESSOR} ${CMAKE_SYSTEM_NAME} STILL NEEDS WORK!!!")
  elseif(${CMAKE_SYSTEM_NAME} MATCHES "Linux")

    set(DEFINITIONS_L1
      HOST_LINUX LINUX LINUX86 LINUX8664 MAXCPUS=256 MAXCPUSL=8 MAXCPUSR=8
      TARGET_LINUX TARGET_LINUX_X86 TARGET_LINUX_X8664 TARGET_X86 TARGET_X8664
      __gnu_linux__ PG_PIC)
    set(FLAGS_L1 "-m64 -O3 ")

    set(DEFINITIONS_L2
      LINUX LINUX86 LINUX8664 MAXCPUS=256 MAXCPUSL=8 MAXCPUSR=8 __gnu_linux__
      TARGET_LINUX TARGET_LINUX_X86 TARGET_LINUX_X8664 TARGET_X86 TARGET_X8664
      PG_PIC)
    set(FLAGS_L2 "-m64 -O3 -mtune=core-avx2 -march=core-avx2 ")

    # common
    # Definitions and compiler flags for level 1 directories
    set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_L1" ${DEFINITIONS_L1})
    set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_L1" ${FLAGS_L1})

    # Definitions and compiler flags for level 2 directories
    set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_L2" ${DEFINITIONS_L2})
    set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_L2" ${FLAGS_L2})
    # common

    # x86_64
    # Definitions and compiler flags for level 1 directories
    set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_X8664_L1" ${DEFINITIONS_L1})
    set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_X8664_L1" ${FLAGS_L1})

    # Definitions and compiler flags for level 2 directories
    set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_X8664_L2" ${DEFINITIONS_L2})
    set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_X8664_L2" ${FLAGS_L2})
    # x86_64

  elseif(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
    set(DEFINITIONS_L1 HOST_OSX MAXCPUS=256 MAXCPUSL=8 MAXCPUSR=4 OSX OSX86
      OSX8664 TARGET_OSX TARGET_OSX_X86 TARGET_OSX_X8664 TARGET_X86
      TARGET_X8664 __gnu_osx__ PG_PIC)
    set(FLAGS_L1 "-m64 -O3 -fomit-frame-pointer ")

    set(DEFINITIONS_L2 OSX86 TARGET_OSX_X86 TARGET_OSX_X8664 PG_PIC)
    set(FLAGS_L2 "-m64 -O3 -fomit-frame-pointer -mavx2 -mfma ")

    # common
    # Definitions and compiler flags for level 1 directories
    set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_L1" ${DEFINITIONS_L1})
    set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_L1" ${FLAGS_L1})

    # Definitions and compiler flags for level 2 directories
    set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_L2" ${DEFINITIONS_L2})
    set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_L2" ${FLAGS_L2})
    # common

    # x86_64
    # Definitions and compiler flags for level 1 directories
    set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_X8664_L1" ${DEFINITIONS_L1})
    set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_X8664_L1" ${FLAGS_L1})

    # Definitions and compiler flags for level 2 directories
    set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_X8664_L2" ${DEFINITIONS_L2})
    set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_X8664_L2" ${FLAGS_L2})
    # x86_64
  elseif(${CMAKE_SYSTEM_NAME} MATCHES "Windows")
    set(DEFINITIONS_L1
      TARGET_WIN_X8664 TARGET_WIN _PGI_NOBUILTINS MAXCPUS=256
      MAXCPUSL=8 MAXCPUSR=8 WINNT WIN64 LONG_IS_32 _PGI_NOBUILTINS
      WINNT WIN64 TARGET_WIN_X8664 HOST_WIN _DLL)

    set(DEFINITIONS_L2
      TARGET_WIN_X8664 TARGET_WIN _PGI_NOBUILTINS MAXCPUS=256
      MAXCPUSL=8 MAXCPUSR=8 WINNT WIN64 LONG_IS_32 _PGI_NOBUILTINS
      WINNT WIN64 TARGET_WIN_X8664 HOST_WIN _DLL)

    # common
    # Definitions and compiler flags for level 1 directories
    set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_L1" ${DEFINITIONS_L1})
    set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_L1" ${FLAGS_L1})

    # Definitions and compiler flags for level 2 directories
    set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_L2" ${DEFINITIONS_L2})
    set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_L2" ${FLAGS_L2})
    # common

    # x86_64
    # Definitions and compiler flags for level 1 directories
    set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_X8664_L1" ${DEFINITIONS_L1})
    set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_X8664_L1" ${FLAGS_L1})

    # Definitions and compiler flags for level 2 directories
    set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_X8664_L2" ${DEFINITIONS_L2})
    set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_X8664_L2" ${FLAGS_L2})
    # x86_64
  else()
    message(FATAL "Operating System not supported.")
  endif()
elseif(${CMAKE_SYSTEM_PROCESSOR} MATCHES "ppc64le")
  if(${CMAKE_SYSTEM_NAME} MATCHES "FreeBSD")
     MESSAGE(FATAL_ERROR "${CMAKE_SYSTEM_PROCESSOR} ${CMAKE_SYSTEM_NAME} STILL NEEDS WORK!!!")
  elseif(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
  set(DEFINITIONS_L1 HOST_LINUX MAXCPUS=256 MAXCPUSL=8 MAXCPUSR=8 TARGET_LINUX
    TARGET_LINUX_POWER TARGET_LLVM TARGET_LLVM_LINUXPOWER TM_I8 PG_PIC)
  set(FLAGS_L1 "-m64 -O3 ")

  set(DEFINITIONS_L2 HOST_LINUX MAXCPUS=256 MAXCPUSL=8 MAXCPUSR=8 TARGET_LINUX
    TARGET_LINUX_POWER TARGET_LLVM TARGET_LLVM_LINUXPOWER TM_I8 PG_PIC)
  set(FLAGS_L2 "-m64 -O3 ")

  # common
  # Definitions and compiler flags for level 1 directories
  set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_L1" ${DEFINITIONS_L1})
  set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_L1" ${FLAGS_L1})

  # Definitions and compiler flags for level 2 directories
  set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_L2" ${DEFINITIONS_L2})
  set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_L2" ${FLAGS_L2})
  # common

  # ppc64le
  # Definitions and compiler flags for level 1 directories
  set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_PPC64LE_L1" ${DEFINITIONS_L1})
  set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_PPC64LE_L1" ${FLAGS_L1})

  # Definitions and compiler flags for level 2 directories
  set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_PPC64LE_L2" ${DEFINITIONS_L2})
  set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_PPC64LE_L2" ${FLAGS_L2})
  # ppc64le
  endif()
elseif(${CMAKE_SYSTEM_PROCESSOR} MATCHES "aarch64")
  if(${CMAKE_SYSTEM_NAME} MATCHES "FreeBSD")
     MESSAGE(FATAL_ERROR "${CMAKE_SYSTEM_PROCESSOR} ${CMAKE_SYSTEM_NAME} STILL NEEDS WORK!!!")
  elseif(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
  set(DEFINITIONS_L1 HOST_LINUX MAXCPUS=8192 MAXCPUSL=128 MAXCPUSR=128
    TARGET_LINUX TARGET_LINUX_ARM TARGET_LINUX_ARM64 TARGET_LLVM
    TARGET_LLVM_LINUXAARCH64 TM_I8)
  set(FLAGS_L1 "-O3 -mcpu=${LLVM_FLANG_CPU_TARGET} -ffast-math -funroll-loops ")
  set(FLAGS_L1 "${FLAGS_L1} -ffp-contract=fast")
  
  set(DEFINITIONS_L2 HOST_LINUX MAXCPUS=8192 MAXCPUSL=128 MAXCPUSR=128
    TARGET_LINUX TARGET_LINUX_ARM TARGET_LINUX_ARM64 TARGET_LLVM TM_I8)
  set(FLAGS_L2 "-O3 -mcpu=${LLVM_FLANG_CPU_TARGET} -ffast-math -funroll-loops -ffp-contract=fast")

  # common
  # Definitions and compiler flags for level 1 directories
  set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_L1" ${DEFINITIONS_L1})
  set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_L1" ${FLAGS_L1})

  # Definitions and compiler flags for level 2 directories
  set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_L2" ${DEFINITIONS_L2})
  set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_L2" ${FLAGS_L2})
  # common

  # aarch64
  # Definitions and compiler flags for level 1 directories
  set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_ARM64_L1" ${DEFINITIONS_L1})
  set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_ARM64_L1" ${FLAGS_L1})

  # Definitions and compiler flags for level 2 directories
  set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_ARM64_L2" ${DEFINITIONS_L2})
  set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_ARM64_L2" ${FLAGS_L2})
  # aarch64
  endif()
else()
  if(${CMAKE_SYSTEM_NAME} MATCHES "FreeBSD")

   set(DEFINITIONS_L1 HOST_FREEBSD FREEBSD FREEBSD8664 MAXCPUS=256 MAXCPUSL=8 MAXCPUSR=8 TARGET_FREEBSD
       TARGET_FREEBSD_64 TARGET_LLVM TARGET_LLVM_64 TARGET_LLVM_FREEBSD64
       TARGET_FREEBSD_GENERIC TARGET_64 PG_PIC)
  set(FLAGS_L1 "-O3 -ffp-contract=fast ")

  set(DEFINITIONS_L2 HOST_FREEBSD FREEBSD FREEBSD8664 MAXCPUS=256 MAXCPUSL=8 MAXCPUSR=8 TARGET_FREEBSD
      TARGET_FREEBSD_64 TARGET_LLVM TARGET_LLVM_64 TARGET_LLVM_FREEBSD64
      TARGET_FREEBSD_GENERIC TARGET_64 PG_PIC)
  set(FLAGS_L2 "-O3 -ffp-contract=fast ")

  # common
  # Definitions and compiler flags for level 1 directories
  set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_L1" ${DEFINITIONS_L1})
  set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_L1" ${FLAGS_L1})

  # Definitions and compiler flags for level 2 directories
  set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_L2" ${DEFINITIONS_L2})
  set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_L2" ${FLAGS_L2})
  # common

  # generic
  # Definitions and compiler flags for level 1 directories
  set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_GENERIC_L1" ${DEFINITIONS_L1})
  set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_GENERIC_L1" ${FLAGS_L1})

  # Definitions and compiler flags for level 2 directories
  set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_GENERIC_L2" ${DEFINITIONS_L2})
  set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_GENERIC_L2" ${FLAGS_L2})
  # generic
  MESSAGE(WARNING "LEVEL 1 D1: ${DEFINITIONS_L1} F1: ${FLAGS_L1}")
  MESSAGE(WARNING "LEVEL 2 D2: ${DEFINITIONS_L2} F2: ${FLAGS_L2}")
  elseif(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
  set(DEFINITIONS_L1 HOST_LINUX MAXCPUS=256 MAXCPUSL=8 MAXCPUSR=8 TARGET_LINUX
    TARGET_LINUX_64 TARGET_LLVM TARGET_LLVM_64 TARGET_LLVM_LINUX64
    TARGET_LINUX_GENERIC TARGET_64 PG_PIC)
  set(FLAGS_L1 "-O3 -ffp-contract=fast ")

  set(DEFINITIONS_L2 HOST_LINUX MAXCPUS=256 MAXCPUSL=8 MAXCPUSR=8 TARGET_LINUX
    TARGET_LINUX_64 TARGET_LLVM TARGET_LLVM_64 TARGET_LLVM_LINUX64
    TARGET_LINUX_GENERIC TARGET_64 PG_PIC)
  set(FLAGS_L2 "-O3 -ffp-contract=fast ")

  # common
  # Definitions and compiler flags for level 1 directories
  set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_L1" ${DEFINITIONS_L1})
  set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_L1" ${FLAGS_L1})

  # Definitions and compiler flags for level 2 directories
  set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_L2" ${DEFINITIONS_L2})
  set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_L2" ${FLAGS_L2})
  # common

  # generic
  # Definitions and compiler flags for level 1 directories
  set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_GENERIC_L1" ${DEFINITIONS_L1})
  set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_GENERIC_L1" ${FLAGS_L1})

  # Definitions and compiler flags for level 2 directories
  set_property(GLOBAL APPEND PROPERTY "DEFINITIONS_GENERIC_L2" ${DEFINITIONS_L2})
  set_property(GLOBAL APPEND_STRING PROPERTY "FLAGS_GENERIC_L2" ${FLAGS_L2})
  # generic
  endif()
endif()

include_directories(common)
if( ${PROCESSOR} MATCHES "x86_64" AND NOT ${LIBPGMATH_WITH_GENERIC} )
        MESSAGE(FATAL_ERROR "HERE 0")
  if( ${TARGET_OS} STREQUAL "Linux" )
  include_directories(x86_64)
  elseif( ${TARGET_OS} STREQUAL "FreeBSD")
  include_directories(amd64-FreeBSD)
  endif()
elseif( ${PROCESSOR} MATCHES "amd64" AND NOT ${LIBPGMATH_WITH_GENERIC} )
        MESSAGE(FATAL_ERROR "HERE 1")
  include_directories(amd64-FreeBSD)
# elseif(${CMAKE_SYSTEM_PROCESSOR} MATCHES "ppc64le")
#   include_directories(ppc64le)
elseif(${CMAKE_SYSTEM_PROCESSOR} MATCHES "aarch64")
        MESSAGE(FATAL_ERROR "HERE 2")
  if( ${TARGET_OS} STREQUAL "Linux" )
  include_directories(generic)
  include_directories(aarch64)
  elseif( ${TARGET_OS} STREQUAL "FreeBSD" )
        MESSAGE(FATAL_ERROR "HERE 3")
  include_directories(generic)
  include_directories(aarch64-FreeBSD)
  endif()
elseif( ${PROCESSOR} MATCHES "ppc64le|generic" OR ${LIBPGMATH_WITH_GENERIC} )
        MESSAGE(WARNING "HERE 4")
if( ${CMAKE_SYSTEM_PROCESSOR} STREQUAL "amd64")
        # include_directories(amd64-FreeBSD)
        MESSAGE(WARNING "INCLUDE_SUBDIRECTORY amd64-FreeBSD")
endif()
  include_directories(generic)
endif()

# Add directories to build
add_subdirectory(common)
if(${PROCESSOR} MATCHES "x86_64" AND NOT ${LIBPGMATH_WITH_GENERIC})
  if( ${TARGET_OS} STREQUAL "Linux" )
  add_subdirectory(x86_64)
  elseif( ${TARGET_OS} STREQUAL "FreeBSD")
  add_subdirectory(amd64-FreeBSD)
  endif()
# elseif(${CMAKE_SYSTEM_PROCESSOR} MATCHES "ppc64le")
#   add_subdirectory(ppc64le)
elseif(${CMAKE_SYSTEM_PROCESSOR} MATCHES "aarch64")
  if( ${TARGET_OS} STREQUAL "Linux" )
  add_subdirectory(generic)
  add_subdirectory(aarch64)
  elseif( ${TARGET_OS} STREQUAL "FreeBSD" )
        MESSAGE(FATAL_ERROR "HERE 3")
  add_subdirectory(generic)
  add_subdirectory(aarch64-FreeBSD)
  endif()
elseif(${PROCESSOR} MATCHES "ppc64le|generic" OR ${LIBPGMATH_WITH_GENERIC})
        MESSAGE(WARNING "HERE 4")
if( ${CMAKE_SYSTEM_PROCESSOR} STREQUAL "amd64")
        # add_subdirectory(amd64-FreeBSD)
        MESSAGE(WARNING "ADD_SUBDIRECTORY amd64-FreeBSD")
endif()
  add_subdirectory(generic)
endif()

# Create libmath static library
get_property(TARGET_OBJECTS GLOBAL PROPERTY "TARGET_OBJECTS")

add_library(${LIBPGMATH_LIBRARY_NAME} SHARED ${TARGET_OBJECTS})
add_library(${LIBPGMATH_LIBRARY_NAME}_static STATIC ${TARGET_OBJECTS})
set_target_properties(${LIBPGMATH_LIBRARY_NAME}_static PROPERTIES OUTPUT_NAME ${LIBPGMATH_LIBRARY_NAME})
install(TARGETS ${LIBPGMATH_LIBRARY_NAME}
  LIBRARY DESTINATION lib)
install(TARGETS ${LIBPGMATH_LIBRARY_NAME}_static
  ARCHIVE DESTINATION lib)
