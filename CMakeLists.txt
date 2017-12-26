#  :copyright: (c) 2017 Alex Huszagh.
#  :license: BSD-2, see LICENSE.md for more details.

set(CMAKE_LEGACY_CYGWIN_WIN32 1)
cmake_minimum_required(VERSION 2.8)
project(warnings CXX)
enable_testing()

# FLAGS
# -----

set(CMAKE_CXX_STANDARD 11)
set(CXX_STANDARD TRUE)

option(BUILD_STATIC "Build tests using static linkage" ON)
option(BUILD_TESTS "Build warnings library tests" ON)

if(${CMAKE_CXX_COMPILER_ID} STREQUAL "GNU")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror")
elseif(${CMAKE_CXX_COMPILER_ID} STREQUAL "Clang")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror")
elseif(MSVC)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS=1)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -WX")
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd /Od /Fd${CMAKE_BINARY_DIR}/${PROJECT_NAME}.pdb")
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT /Ox /Zi /Fd${CMAKE_BINARY_DIR}/${PROJECT_NAME}.pdb")
    set(CMAKE_CXX_FLAGS_MINSIZEREL "${CMAKE_CXX_FLAGS_MINSIZEREL} /MT /Zi /Fd${CMAKE_BINARY_DIR}/${PROJECT_NAME}.pdb")
    set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO} /MT /Fd${CMAKE_BINARY_DIR}/${PROJECT_NAME}.pdb")
endif()

if(BUILD_STATIC)
    if(MINGW OR MSYS OR CYGWIN)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static")
    elseif(UNIX)
        set(CMAKE_POSITION_INDEPENDENT_CODE ON)
        add_definitions(-fPIC)
    endif()
endif()

# LIBRARY
# -------

set(WARNINGS_INCLUDE_DIR src)
set(WARNINGS_INCLUDE_DIRS ${WARNINGS_INCLUDE_DIR})

# TESTS
# -----

set(TEST_FILES
    test/main.cc
    test/all.cc
    test/assign-base-inaccessible.cc
    test/assign-could-not-be-generated.cc
    test/automatic-inline.cc
)

if(BUILD_TESTS)
    include_directories(${WARNINGS_INCLUDE_DIRS})
    add_executable(warnings_tests ${TEST_FILES})
        # Need to specify proper exception handling for Windows.
    if(MSVC)
        set_target_properties(warnings_tests PROPERTIES
            COMPILE_OPTIONS "/EHsc"
        )
    endif()

    add_test(NAME warnings_tests
        COMMAND warnings_tests
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    )
endif()
