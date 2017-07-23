//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_OBJC_MISSING_PROPERTY_SYNTHESIS)
#   error objc-missing-property-synthesis already suppressed.
#else
#   define WARNINGS_OBJC_MISSING_PROPERTY_SYNTHESIS
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wobjc-missing-property-synthesis")
#       pragma clang diagnostic ignored "-Wobjc-missing-property-synthesis"
#   endif
#endif
