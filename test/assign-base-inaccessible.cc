//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#include <warnings/push.h>
#include <warnings/assign-base-inaccessible.h>
#include <warnings/c++11-extensions.h>

class Foo
{
public:
    Foo& operator=(const Foo&) = delete;
};

class Boo: public Foo
{};


#include <warnings/pop.h>
