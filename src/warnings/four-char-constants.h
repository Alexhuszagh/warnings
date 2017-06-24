//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_FOUR_CHAR_CONSTANTS)
#   error four-char-constants already suppressed.
#else
#   define WARNINGS_FOUR_CHAR_CONSTANTS
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wfour-char-constants")
#       pragma clang diagnostic ignored "-Wfour-char-constants"
#   endif
#endif
