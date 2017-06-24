//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_DUPLICATE_METHOD_MATCH)
#   error duplicate-method-match already suppressed.
#else
#   define WARNINGS_DUPLICATE_METHOD_MATCH
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wduplicate-method-match")
#       pragma clang diagnostic ignored "-Wduplicate-method-match"
#   endif
#endif
