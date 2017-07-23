//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_DFLT_CTOR_COULD_NOT_BE_GENERATED)
#   error dflt-ctor-could-not-be-generated already suppressed.
#else
#   define WARNINGS_DFLT_CTOR_COULD_NOT_BE_GENERATED
#endif

#if defined(WARNINGS_HAVE_MSVC)
#   pragma warning(disable: 4510)
#endif
