//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_EXIT_TIME_DESTRUCTORS)
#   error exit-time-destructors already suppressed.
#else
#   define WARNINGS_EXIT_TIME_DESTRUCTORS
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wexit-time-destructors")
#       pragma clang diagnostic ignored "-Wexit-time-destructors"
#   endif
#endif
