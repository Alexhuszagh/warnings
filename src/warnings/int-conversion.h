//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_INT_CONVERSION)
#   error int-conversion already suppressed.
#else
#   define WARNINGS_INT_CONVERSION
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wint-conversion")
#       pragma clang diagnostic ignored "-Wint-conversion"
#   endif
#endif
