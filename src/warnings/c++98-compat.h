//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_CXX98_COMPAT)
#   error c++98-compat.
#else
#   define WARNINGS_CXX98_COMPAT
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wc++98-compat")
#       pragma clang diagnostic ignored "-Wc++98-compat"
#   endif
#endif
