//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_INVALID_OFFSETOF)
#   error invalid-offsetof already suppressed.
#else
#   define WARNINGS_INVALID_OFFSETOF
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Winvalid-offsetof")
#       pragma clang diagnostic ignored "-Winvalid-offsetof"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Winvalid-offsetof"
#endif
