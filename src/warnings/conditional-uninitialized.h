//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_CONDITIONAL_UNINITIALIZED)
#   error conditional-uninitialized already suppressed.
#else
#   define WARNINGS_CONDITIONAL_UNINITIALIZED
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wconditional-uninitialized")
#       pragma clang diagnostic ignored "-Wconditional-uninitialized"
#   endif
#endif
