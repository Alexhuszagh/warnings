//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_MISSING_BRACES)
#   error missing-braces already suppressed.
#else
#   define WARNINGS_MISSING_BRACES
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wmissing-braces")
#       pragma clang diagnostic ignored "-Wmissing-braces"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Wmissing-braces"
#endif
