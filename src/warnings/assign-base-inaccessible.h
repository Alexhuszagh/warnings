//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_ASSIGN_BASE_INACCESSIBLE)
#   error assign-base-inaccessible already suppressed.
#else
#   define WARNINGS_ASSIGN_BASE_INACCESSIBLE
#endif

#if defined(WARNINGS_HAVE_MSVC)
#   pragma warning(disable: 4626)
#endif
