//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_UNREACHABLE_CODE)
#   error unreachable-code already suppressed.
#else
#   define WARNINGS_UNREACHABLE_CODE
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wunreachable-code")
#       pragma clang diagnostic ignored "-Wunreachable-code"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Wunreachable-code"
#endif

#if defined(WARNINGS_HAVE_MSVC)
#   pragma warning(disable: 4702)
#endif
