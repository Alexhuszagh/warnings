//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_EXTRA_SEMI)
#   error extra-semi already suppressed.
#else
#   define WARNINGS_EXTRA_SEMI
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wextra-semi")
#       pragma clang diagnostic ignored "-Wextra-semi"
#   endif
#endif
