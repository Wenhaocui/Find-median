#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FindMedianTest, HandlesConsecutiveNumbers) {
  Solution solution;
  std::vector<int> inputs = {1, 2, 3, 4};
  EXPECT_EQ(solution.FindMedian(inputs), 2.5);
}
TEST(FindMedianTest, HandlesConsecutiveNumbersOddLength) {
  Solution solution;
  std::vector<int> inputs = {1, 5, 3, 2, 4};
  EXPECT_EQ(solution.FindMedian(inputs), 3);
}

TEST(FindMedianTest, HandlesConsecutiveNumbersUnsorted) {
  Solution solution;
  std::vector<int> inputs = {4, 3, 2, 1, 5, 6};
  EXPECT_EQ(solution.FindMedian(inputs), 3.5);
}

TEST(FindMedianTest, HandlesEmptyVector) {
  Solution solution;
  std::vector<int> inputs = {};
  EXPECT_EQ(solution.FindMedian(inputs), -1);
}

TEST(FindMedianTest, HandlesUnconsecutiveNumbersUnsorted) {
Solution solution;
std::vector<int> inputs = {1, 4, 7, 10, 5};
EXPECT_EQ(solution.FindMedian(inputs), 5);
}