//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_SELECTOR)
#   error selector already suppressed.
#else
#   define WARNINGS_SELECTOR
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wselector")
#       pragma clang diagnostic ignored "-Wselector"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC) && !defined(WARNINGS_HAVE_CPP)
#   pragma GCC diagnostic ignored "-Wselector"
#endif

