#include <gtest/gtest.h>

import core;

TEST(core_test, foo_calculation) {
	// Expect equality.
	EXPECT_EQ(core::calculation(5,6), 11);
}