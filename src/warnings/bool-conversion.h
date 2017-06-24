//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_BOOL_CONVERSION)
#   error bool-conversion already suppressed.
#else
#   define WARNINGS_BOOL_CONVERSION
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wbool-conversion")
#       pragma clang diagnostic ignored "-Wbool-conversion"
#   endif
#endif
