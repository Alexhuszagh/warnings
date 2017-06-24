//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_CXX11_EXTENSIONS)
#   error c++11-extensions already suppressed.
#else
#   define WARNINGS_CXX11_EXTENSIONS
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wc++11-extensions")
#       pragma clang diagnostic ignored "-Wc++11-extensions"
#   endif
#endif
