//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_SHADOW)
#   error shadow already suppressed.
#else
#   define WARNINGS_SHADOW
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wshadow")
#       pragma clang diagnostic ignored "-Wshadow"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Wshadow"
#endif
