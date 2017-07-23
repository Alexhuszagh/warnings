//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_SHIFT_SIGN_OVERFLOW)
#   error shift-sign-overflow already suppressed.
#else
#   define WARNINGS_SHIFT_SIGN_OVERFLOW
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wshift-sign-overflow")
#       pragma clang diagnostic ignored "-Wshift-sign-overflow"
#   endif
#endif
