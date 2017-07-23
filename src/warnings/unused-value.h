//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_UNUSED_VALUE)
#   error unused-value already suppressed.
#else
#   define WARNINGS_UNUSED_VALUE
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wunused-value")
#       pragma clang diagnostic ignored "-Wunused-value"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Wunused-value"
#endif

#if defined(WARNINGS_HAVE_MSVC)
#   pragma warning(disable: 4555)
#endif
