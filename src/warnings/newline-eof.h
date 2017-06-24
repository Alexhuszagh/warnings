//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_NEWLINE_EOF)
#   error newline-eof already suppressed.
#else
#   define WARNINGS_NEWLINE_EOF
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wnewline-eof")
#       pragma clang diagnostic ignored "-Wnewline-eof"
#   endif
#endif
