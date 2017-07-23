//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_UNUSED_LABEL)
#   error unused-label already suppressed.
#else
#   define WARNINGS_UNUSED_LABEL
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wunused-label")
#       pragma clang diagnostic ignored "-Wunused-label"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Wunused-label"
#endif
