//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_ARC_BRIDGE_CASTS_DISALLOWED_IN_NONARC)
#   error arc-bridge-casts-disallowed-in-nonarc already suppressed.
#else
#   define WARNINGS_ARC_BRIDGE_CASTS_DISALLOWED_IN_NONARC
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Warc-bridge-casts-disallowed-in-nonarc")
#       pragma clang diagnostic ignored "-Warc-bridge-casts-disallowed-in-nonarc"
#   endif
#endif
