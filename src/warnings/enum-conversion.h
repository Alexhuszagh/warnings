//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_ENUM_CONVERSION)
#   error enum-conversion already suppressed.
#else
#   define WARNINGS_ENUM_CONVERSION
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wenum-conversion")
#       pragma clang diagnostic ignored "-Wenum-conversion"
#   endif
#endif
