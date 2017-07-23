//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_CXX98_COMPAT_PEDANTIC)
#   error c++98-compat-pedantic already suppressed.
#else
#   define WARNINGS_CXX98_COMPAT_PEDANTIC
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wc++98-compat")
#       pragma clang diagnostic ignored "-Wc++98-compat"
#   endif
#endif
