//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_NAME_LENGTH_EXCEEDED)
#   error name-length-exceeded already suppressed.
#else
#   define WARNINGS_NAME_LENGTH_EXCEEDED
#endif

#if defined(WARNINGS_HAVE_MSVC)
#   pragma warning(disable: 4503)
#endif
