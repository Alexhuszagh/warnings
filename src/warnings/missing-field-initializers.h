//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_MISSING_FIELD_INITIALIZERS)
#   error missing-field-initializers already suppressed.
#else
#   define WARNINGS_MISSING_FIELD_INITIALIZERS
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wmissing-field-initializers")
#       pragma clang diagnostic ignored "-Wmissing-field-initializers"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif
