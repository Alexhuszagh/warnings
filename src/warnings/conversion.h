//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_CONVERSION)
#   error conversion already suppressed.
#else
#   define WARNINGS_CONVERSION
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wconversion")
#       pragma clang diagnostic ignored "-Wconversion"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Wconversion"
#endif

#if defined(WARNINGS_HAVE_MSVC)
#   pragma warning(disable: 4244)
#endif
