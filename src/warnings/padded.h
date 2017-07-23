//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_PADDED)
#   error padded already suppressed.
#else
#   define WARNINGS_PADDED
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wpadded")
#       pragma clang diagnostic ignored "-Wpadded"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Wpadded"
#endif

#if defined(WARNINGS_HAVE_MSVC)
#   pragma warning(disable: 4820)
#endif
