//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_INHERITS_VIA_DOMINANCE)
#   error inherits-via-dominance already suppressed.
#else
#   define WARNINGS_INHERITS_VIA_DOMINANCE
#endif

#if defined(WARNINGS_HAVE_MSVC)
#   pragma warning(disable: 4250)
#endif
