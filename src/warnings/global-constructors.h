//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_GLOBAL_CONSTRUCTORS)
#   error global-constructors already suppressed.
#else
#   define WARNINGS_GLOBAL_CONSTRUCTORS
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wglobal-constructors")
#       pragma clang diagnostic ignored "-Wglobal-constructors"
#   endif
#endif
