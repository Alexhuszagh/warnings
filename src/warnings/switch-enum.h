//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_SWITCH_ENUM)
#   error switch-enum already suppressed.
#else
#   define WARNINGS_SWITCH_ENUM
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wswitch-enum")
#       pragma clang diagnostic ignored "-Wswitch-enum"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Wswitch-enum"
#endif

#if defined(WARNINGS_HAVE_MSVC)
#   pragma warning(disable: 4061)
#endif

