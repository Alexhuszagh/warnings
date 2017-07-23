//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_CONSTANT_CONVERSION)
#   error constant-conversion already suppressed.
#else
#   define WARNINGS_CONSTANT_CONVERSION
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wconstant-conversion")
#       pragma clang diagnostic ignored "-Wconstant-conversion"
#   endif
#endif
