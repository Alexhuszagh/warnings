//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_DEPRECATED_IMPLEMENTATIONS)
#   error deprecated-implementations already suppressed.
#else
#   define WARNINGS_DEPRECATED_IMPLEMENTATIONS
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wdeprecated-implementations")
#       pragma clang diagnostic ignored "-Wdeprecated-implementations"
#   endif
#endif
