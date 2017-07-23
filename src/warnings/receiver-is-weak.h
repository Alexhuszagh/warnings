//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_RECEIVER_IS_WEAK)
#   error receiver-is-weak already suppressed.
#else
#   define WARNINGS_RECEIVER_IS_WEAK
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wreceiver-is-weak")
#       pragma clang diagnostic ignored "-Wreceiver-is-weak"
#   endif
#endif
