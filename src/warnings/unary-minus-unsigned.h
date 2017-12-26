//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_UNARY_MINUS_UNSIGNED)
#   error unary-minus-unsigned already suppressed.
#else
#   define WARNINGS_UNARY_MINUS_UNSIGNED
#endif

#if defined(WARNINGS_HAVE_MSVC)
#   pragma warning(disable: 4146)
#endif
