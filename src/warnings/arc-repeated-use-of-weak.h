//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_ARC_REPEATED_USE_OF_WEAK)
#   error arc-repeated-use-of-weak already suppressed.
#else
#   define WARNINGS_ARC_REPEATED_USE_OF_WEAK
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Warc-repeated-use-of-weak")
#       pragma clang diagnostic ignored "-Warc-repeated-use-of-weak"
#   endif
#endif
