//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_DOCUMENTATION)
#   error documentation already suppressed.
#else
#   define WARNINGS_DOCUMENTATION
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wdocumentation")
#       pragma clang diagnostic ignored "-Wdocumentation"
#   endif
#endif
