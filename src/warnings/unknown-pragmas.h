//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_UNKNOWN_PRAGMAS)
#   error unknown-pragmas already suppressed.
#else
#   define WARNINGS_UNKNOWN_PRAGMAS
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wunknown-pragmas")
#       pragma clang diagnostic ignored "-Wunknown-pragmas"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Wunknown-pragmas"
#endif
