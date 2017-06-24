//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#include <warnings/push.h>
#include <warnings/assign-could-not-be-generated.h>

class Boo
{
public:
    Boo();

private:
    const int a_;
};

#include <warnings/pop.h>
