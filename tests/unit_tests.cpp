#include <gtest/gtest.h>
#include "../math_operations.h"

TEST(MathOperationsTest, AddPositiveNumbers) {
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(10, 5), 15);
}

TEST(MathOperationsTest, AddNegativeNumbers) {
    EXPECT_EQ(add(-2, -3), -5);
    EXPECT_EQ(add(-10, 5), -5);
}

TEST(MathOperationsTest, AddZero) {
    EXPECT_EQ(add(0, 0), 0);
    EXPECT_EQ(add(5, 0), 5);
    EXPECT_EQ(add(0, 10), 10);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
