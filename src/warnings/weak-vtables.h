//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_WEAK_VTABLES)
#   error weak-vtables already suppressed.
#else
#   define WARNINGS_WEAK_VTABLES
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wweak-vtables")
#       pragma clang diagnostic ignored "-Wweak-vtables"
#   endif
#endif
