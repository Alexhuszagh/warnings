//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_EXPLICIT_OWNERSHIP_TYPE)
#   error explicit-ownership-type already suppressed.
#else
#   define WARNINGS_EXPLICIT_OWNERSHIP_TYPE
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wexplicit-ownership-type")
#       pragma clang diagnostic ignored "-Wexplicit-ownership-type"
#   endif
#endif
