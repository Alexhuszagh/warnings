//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_SHORTEN_64_TO_32)
#   error shorten-64-to-32 already suppressed.
#else
#   define WARNINGS_SHORTEN_64_TO_32
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wshorten-64-to-32")
#       pragma clang diagnostic ignored "-Wshorten-64-to-32"
#   endif
#endif
