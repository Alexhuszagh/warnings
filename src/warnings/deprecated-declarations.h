//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_DEPRECATED_DECLARATIONS)
#   error deprecated-declarations already suppressed.
#else
#   define WARNINGS_DEPRECATED_DECLARATIONS
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wdeprecated-declarations")
#       pragma clang diagnostic ignored "-Wdeprecated-declarations"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

#if defined(WARNINGS_HAVE_MSVC)
#   pragma warning(disable: 4996)
#endif
