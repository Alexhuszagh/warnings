//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_POINTER_SIGN)
#   error pointer-sign already suppressed.
#else
#   define WARNINGS_POINTER_SIGN
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wpointer-sign")
#       pragma clang diagnostic ignored "-Wpointer-sign"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC) && !defined(WARNINGS_HAVE_CPP)
#   pragma GCC diagnostic ignored "-Wpointer-sign"
#endif
