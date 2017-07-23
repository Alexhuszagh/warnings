//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_DISABLED_MACRO_EXPANSION)
#   error disabled-macro-expansion already suppressed.
#else
#   define WARNINGS_DISABLED_MACRO_EXPANSION
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wdisabled-macro-expansion")
#       pragma clang diagnostic ignored "-Wdisabled-macro-expansion"
#   endif
#endif
