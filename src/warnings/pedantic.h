//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_PEDANTIC)
#   error pedantic already suppressed.
#else
#   define WARNINGS_PEDANTIC
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wpedantic")
#       pragma clang diagnostic ignored "-Wpedantic"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Wpedantic"
#endif
