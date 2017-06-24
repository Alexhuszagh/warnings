//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_OBJC_ROOT_CLASS)
#   error objc-root-class already suppressed.
#else
#   define WARNINGS_OBJC_ROOT_CLASS
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wobjc-root-class")
#       pragma clang diagnostic ignored "-Wobjc-root-class"
#   endif
#endif
