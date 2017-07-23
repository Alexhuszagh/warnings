//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_OLD_STYLE_CAST)
#   error old-style-cast already suppressed.
#else
#   define WARNINGS_OLD_STYLE_CAST
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wold-style-cast")
#       pragma clang diagnostic ignored "-Wold-style-cast"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Wold-style-cast"
#endif
