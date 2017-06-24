//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_PARENTHESES)
#   error parentheses already suppressed.
#else
#   define WARNINGS_PARENTHESES
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wparentheses")
#       pragma clang diagnostic ignored "-Wparentheses"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Wparentheses"
#endif
