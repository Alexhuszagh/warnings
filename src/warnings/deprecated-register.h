//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_DEPRECATED_REGISTER)
#   error deprecated-register already suppressed.
#else
#   define WARNINGS_DEPRECATED_REGISTER
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wdeprecated-register")
#       pragma clang diagnostic ignored "-Wdeprecated-register"
#   endif
#endif
