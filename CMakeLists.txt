#  :copyright: (c) 2017 Alex Huszagh.
#  :license: BSD-2, see LICENSE.md for more details.

set(CMAKE_LEGACY_CYGWIN_WIN32 1)
cmake_minimum_required(VERSION 2.8)
project(warnings CXX)
enable_testing()

# FLAGS
# -----

option(BUILD_TESTS "Build warnings library tests" ON)

if(BUILD_STATIC)
    if(UNIX)
        set(CMAKE_POSITION_INDEPENDENT_CODE ON)
        add_definitions(-fPIC)
    elseif(MINGW)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static")
    elseif(MSVC)
        set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd /O0 /Fd${CMAKE_BINARY_DIR}/${PROJECT_NAME}.pdb")
        set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT /Ox /Zi /Fd${CMAKE_BINARY_DIR}/${PROJECT_NAME}.pdb")
        set(CMAKE_CXX_FLAGS_MINSIZEREL "${CMAKE_CXX_FLAGS_MINSIZEREL} /MT /Zi /Fd${CMAKE_BINARY_DIR}/${PROJECT_NAME}.pdb")
        set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO} /MT /Fd${CMAKE_BINARY_DIR}/${PROJECT_NAME}.pdb")
    endif()
endif()

# TESTS
# -----

set(TEST_FILES
    test/main.cc
)

if(BUILD_TESTS)
    if(NOT TARGET gtest)
        add_subdirectory(googletest)
    endif()
    include_directories(googletest/googletest/include)

    add_executable(warnings_tests ${TEST_FILES})
    target_link_libraries(warnings_tests
        gtest
        gtest_main
    )

    add_test(NAME warnings_tests
        COMMAND warnings_tests
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    )
endif()
