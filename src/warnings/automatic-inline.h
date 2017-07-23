//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_AUTOMATIC_INLINE)
#   error automatic-inline already suppressed.
#else
#   define WARNINGS_AUTOMATIC_INLINE
#endif

#if defined(WARNINGS_HAVE_MSVC)
#   pragma warning(disable: 4711)
#endif
