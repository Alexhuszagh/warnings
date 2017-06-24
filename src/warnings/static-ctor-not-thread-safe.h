//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_STATIC_CTOR_NOT_THREAD_SAFE)
#   error static-ctor-not-thread-safe already suppressed.
#else
#   define WARNINGS_STATIC_CTOR_NOT_THREAD_SAFE
#endif

#if defined(WARNINGS_HAVE_MSVC)
#   pragma warning(disable: 4640)
#endif
