//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_NON_VIRTUAL_DTOR)
#   error non-virtual-dtor already suppressed.
#else
#   define WARNINGS_NON_VIRTUAL_DTOR
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wnon-virtual-dtor")
#       pragma clang diagnostic ignored "-Wnon-virtual-dtor"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#endif

#if defined(WARNINGS_HAVE_MSVC)
#   pragma warning(disable: 4265)
#endif
