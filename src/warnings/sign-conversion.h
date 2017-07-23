//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_SIGN_CONVERSION)
#   error sign-conversion already suppressed.
#else
#   define WARNINGS_SIGN_CONVERSION
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wsign-conversion")
#       pragma clang diagnostic ignored "-Wsign-conversion"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Wsign-conversion"
#endif

#if defined(WARNINGS_HAVE_MSVC)
#   pragma warning(disable: 4365)
#endif
