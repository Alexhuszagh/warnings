//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#include <warnings/push.h>
#include <warnings/automatic-inline.h>


void foo();
void foo()
{}


void bar()
{
    foo();
}

#include <warnings/pop.h>
