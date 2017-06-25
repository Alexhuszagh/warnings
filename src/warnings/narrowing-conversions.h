//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.
/*
 *  \addtogroup Warnings
 *  \brief Suppress narrowing conversions.
 */

#pragma once

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_NARROWING_CONVERSIONS)
#   error automatic-inline already suppressed.
#else
#   define WARNINGS_NARROWING_CONVERSIONS
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wnarrowing")
#       pragma clang diagnostic ignored "-Wnarrowing"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Wnarrowing"
#endif

#if defined(WARNINGS_HAVE_MSVC)
// Some of these warnings aren't consistently recognized.
// Both 2397 and 2398 aren't documented.
#   include <warnings/no-such-warning.h>
#   pragma warning(disable: 2397)
#   pragma warning(disable: 2398)
#   pragma warning(disable: 4838)
#endif
