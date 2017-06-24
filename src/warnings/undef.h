//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_UNDEF)
#   error undef already suppressed.
#else
#   define WARNINGS_UNDEF
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wundef")
#       pragma clang diagnostic ignored "-Wundef"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Wundef"
#endif

#if defined(WARNINGS_HAVE_MSVC)
#   pragma warning(disable: 4668)
#endif
