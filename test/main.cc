//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.
/*
 *  \addtogroup Tests
 *  \brief Test runner.
 */

#include <gtest/gtest.h>


// SUITE
// -----


/** \brief Execute test suite.
 */
int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
