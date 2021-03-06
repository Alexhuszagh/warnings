//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_SIGN_COMPARE)
#   error sign-compare already suppressed.
#else
#   define WARNINGS_SIGN_COMPARE
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wsign-compare")
#       pragma clang diagnostic ignored "-Wsign-compare"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Wsign-compare"
#endif

#if defined(WARNINGS_HAVE_MSVC)
#   pragma warning(disable: 4389)
#endif
