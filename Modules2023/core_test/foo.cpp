#include <gtest/gtest.h>

import foo;

TEST(core_test, foo_calculation) {
	// Expect equality.
	EXPECT_EQ(foo::foo_calculation(5,6), 11);
}