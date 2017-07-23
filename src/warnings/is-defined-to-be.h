//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_IS_DEFINED_TO_BE)
#   error is-defined-to-be already suppressed.
#else
#   define WARNINGS_IS_DEFINED_TO_BE
#endif

#if defined(WARNINGS_HAVE_MSVC)
#   pragma warning(disable: 4574)
#endif
