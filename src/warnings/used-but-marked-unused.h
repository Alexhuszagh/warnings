//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_USED_BUT_MARKED_UNUSED)
#   error used-but-marked-unused already suppressed.
#else
#   define WARNINGS_USED_BUT_MARKED_UNUSED
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wused-but-marked-unused")
#       pragma clang diagnostic ignored "-Wused-but-marked-unused"
#   endif
#endif
