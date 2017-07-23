//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_LAYOUT_CHANGED)
#   error layout-changed already suppressed.
#else
#   define WARNINGS_LAYOUT_CHANGED
#endif

#if defined(WARNINGS_HAVE_MSVC)
#   pragma warning(disable: 4371)
#endif
