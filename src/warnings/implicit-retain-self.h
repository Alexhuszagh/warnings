//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_IMPLICIT_RETAIN_SELF)
#   error implicit-retain-self already suppressed.
#else
#   define WARNINGS_IMPLICIT_RETAIN_SELF
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wimplicit-retain-self")
#       pragma clang diagnostic ignored "-Wimplicit-retain-self"
#   endif
#endif
