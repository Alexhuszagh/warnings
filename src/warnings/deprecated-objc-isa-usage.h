//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_DEPRECATED_OBJC_ISA_USAGE)
#   error deprecated-objc-isa-usage already suppressed.
#else
#   define WARNINGS_DEPRECATED_OBJC_ISA_USAGE
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wdeprecated-objc-isa-usage")
#       pragma clang diagnostic ignored "-Wdeprecated-objc-isa-usage"
#   endif
#endif
