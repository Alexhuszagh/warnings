//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.
/**
 *  \addtogroup warnings
 *  \brief Compiler detection macros.
 */

#pragma once

// MSVC
// ----

#if !defined(WARNINGS_COMPILER_DETECTED) && defined(_MSC_VER)
#   define WARNINGS_HAVE_MSVC 1
#   define WARNINGS_COMPILER_DETECTED
#endif

// CLANG
// -----

#if !defined(WARNINGS_COMPILER_DETECTED) && defined(__clang__)
#   define WARNINGS_HAVE_CLANG 1
#   define WARNINGS_COMPILER_DETECTED
#endif

// GCC
// ---

#if !defined(WARNINGS_COMPILER_DETECTED) && defined(__GNUC__)
#   define WARNINGS_HAVE_GCC 1
#   define WARNINGS_COMPILER_DETECTED
#endif

// CODE
// ----

#if defined(__cplusplus__) || defined(__cplusplus)
#   define WARNINGS_HAVE_CPP
#endif

#if defined(__OBJC__)
#   define WARNINGS_HAVE_OBJC
#endif
