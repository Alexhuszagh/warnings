//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_UNEVALUATED_EXPRESSION)
#   error unused-label already suppressed.
#else
#   define WARNINGS_UNEVALUATED_EXPRESSION
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wunevaluated-expression")
#       pragma clang diagnostic ignored "-Wunevaluated-expression"
#   endif
#endif
