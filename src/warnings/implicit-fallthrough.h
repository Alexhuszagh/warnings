//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_IMPLICIT_FALLTHROUGH)
#   error implicit-fallthrough already suppressed.
#else
#   define WARNINGS_IMPLICIT_FALLTHROUGH
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wimplicit-fallthrough")
#       pragma clang diagnostic ignored "-Wimplicit-fallthrough"
#   endif
#endif
