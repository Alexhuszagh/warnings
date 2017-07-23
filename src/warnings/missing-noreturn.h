//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_MISSING_NORETURN)
#   error missing-noreturn already suppressed.
#else
#   define WARNINGS_MISSING_NORETURN
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wmissing-noreturn")
#       pragma clang diagnostic ignored "-Wmissing-noreturn"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Wmissing-noreturn"
#endif
