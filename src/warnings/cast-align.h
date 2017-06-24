//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_CAST_ALIGN)
#   error cast-align already suppressed.
#else
#   define WARNINGS_CAST_ALIGN
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wcast-align")
#       pragma clang diagnostic ignored "-Wcast-align"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Wcast-align"
#endif
