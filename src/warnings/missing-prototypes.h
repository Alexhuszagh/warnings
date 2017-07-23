//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_MISSING_PROTOTYPES)
#   error missing-prototypes already suppressed.
#else
#   define WARNINGS_MISSING_PROTOTYPES
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wmissing-prototypes")
#       pragma clang diagnostic ignored "-Wmissing-prototypes"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC) && !defined(WARNINGS_HAVE_CPP)
#   pragma GCC diagnostic ignored "-Wmissing-prototypes"
#endif
