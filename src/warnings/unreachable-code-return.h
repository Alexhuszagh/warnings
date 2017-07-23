//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_UNREACHABLE_CODE_RETURN)
#   error unreachable-code-return already suppressed.
#else
#   define WARNINGS_UNREACHABLE_CODE_RETURN
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wunreachable-code-return")
#       pragma clang diagnostic ignored "-Wunreachable-code-return"
#   endif
#endif
