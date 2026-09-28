#include <gtest/gtest.h>
#include "two_sum.hpp"

TEST(TwoSum, FindsPair) {
    EXPECT_EQ(twoSum({2, 7, 11, 15}, 9), (std::vector<int>{0, 1}));
}

TEST(TwoSum, NoPairReturnsEmpty) {
    EXPECT_TRUE(twoSum({1, 2, 3}, 100).empty());
}
