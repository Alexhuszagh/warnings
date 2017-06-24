//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_DOCUMENTATION_UNKNOWN_COMMAND)
#   error documentation-unknown-command already suppressed.
#else
#   define WARNINGS_DOCUMENTATION_UNKNOWN_COMMAND
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wdocumentation-unknown-command")
#       pragma clang diagnostic ignored "-Wdocumentation-unknown-command"
#   endif
#endif
