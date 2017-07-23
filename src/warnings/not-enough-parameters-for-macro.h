//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_NOT_ENOUGH_PARAMETERS_FOR_MACRO)
#   error not-enough-parameters-for-macro already suppressed.
#else
#   define WARNINGS_NOT_ENOUGH_PARAMETERS_FOR_MACRO
#endif

#if defined(WARNINGS_HAVE_MSVC)
#   pragma warning(disable: 4003)
#endif
