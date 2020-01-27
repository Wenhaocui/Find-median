#include "src/lib/solution.h"
#include <iostream>
using namespace std;
int main() {
  Solution solution;
  std::vector<int> inputs;
  inputs = {1, 2, 3, 4};
  std::cout << "inputs: {1, 2, 3, 4}, output: " << solution.FindMedian(inputs)
            << std::endl;

  inputs = {1, 5, 3, 2, 4};
  std::cout << "inputs: {1, 5, 3, 2, 4}, output: " << solution.FindMedian(inputs) << std::endl;

  inputs = {4, 3, 2, 1, 5, 6};
  std::cout << "inputs: {4, 3, 2, 1, 5, 6}, output: " << solution.FindMedian(inputs) << std::endl;

  inputs = {};
  std::cout << "inputs: {}, output: " << solution.FindMedian(inputs) << std::endl;

  inputs = {1, 4, 7, 10, 5};
  std::cout << "inputs: {1, 4, 7, 10, 5}, output: " << solution.FindMedian(inputs) << std::endl;
  return 0;

  
}