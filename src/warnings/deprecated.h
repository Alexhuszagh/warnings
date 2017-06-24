//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_DEPRECATED)
#   error depricated already suppressed.
#else
#   define WARNINGS_DEPRECATED
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wdeprecated")
#       pragma clang diagnostic ignored "-Wdeprecated"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Wdeprecated"
#endif
