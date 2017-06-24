//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.
/*
 *  \addtogroup Warnings
 *  \brief Push error suppression.
 */

#pragma once

#include <warnings/compiler.h>

// MACROS
// ------

#if defined(WARNINGS_PUSH)
#   error Must be pop before repushing errors.
#else
#   define WARNINGS_PUSH
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   pragma clang diagnostic push
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic push
#endif

#if defined(WARNINGS_HAVE_MSVC)
#   pragma warning(push)
#endif
