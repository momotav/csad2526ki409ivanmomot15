#include <gtest/gtest.h>
#include "../math_operations.h"

TEST(AddFunction, PositiveNumbers) {
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(100, 200), 300);
}

TEST(AddFunction, NegativeNumbers) {
    EXPECT_EQ(add(-2, -3), -5);
    EXPECT_EQ(add(-1, -99), -100);
}

TEST(AddFunction, MixedSigns) {
    EXPECT_EQ(add(-5, 5), 0);
    EXPECT_EQ(add(10, -3), 7);
}

TEST(AddFunction, Zero) {
    EXPECT_EQ(add(0, 0), 0);
    EXPECT_EQ(add(0, 7), 7);
    EXPECT_EQ(add(-4, 0), -4);
}
