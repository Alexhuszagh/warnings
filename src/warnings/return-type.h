//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_RETURN_TYPE)
#   error return-type already suppressed.
#else
#   define WARNINGS_RETURN_TYPE
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wreturn-type")
#       pragma clang diagnostic ignored "-Wreturn-type"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Wreturn-type"
#endif

