//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_OVERLOADED_VIRTUAL)
#   error overloaded-virtual already suppressed.
#else
#   define WARNINGS_OVERLOADED_VIRTUAL
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Woverloaded-virtual")
#       pragma clang diagnostic ignored "-Woverloaded-virtual"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Woverloaded-virtual"
#endif
