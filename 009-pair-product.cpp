/*
PROBLEM:
Write a function, pairProduct, that takes in a vector of numbers and a target product as arguments.
The function should return a std::array containing a pair of indices whose elements multiply to the given target.
The indices returned must be unique.
Be sure to return the indices, not the elements themselves.
There is guaranteed to be one such pair whose product is the target

exemple:
std::vector<int> numbers { 3, 2, 5, 4, 1 };  
pairProduct(numbers, 8); // -> [1, 3]
*/

#include <array>
#include <vector>
#include <iostream>
#include <unordered_map>

std::array<int, 2> pairProduct(std::vector<int> numbers, int target) {
  std::unordered_map<float, int> map;
  for (int i = 0; i < numbers.size(); i++) {
      float complement = (float)target / (float)numbers[i];
      if (map.contains(complement))
        return std::array<int, 2> {map[complement], i};
    map[numbers[i]] = i;
  }
  return {};
}

void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
  std::vector<int> numbers;
  for (int i = 0; i <= 21000; i += 1) {
    numbers.push_back(i);
  }

  std::array<int, 2> res = pairProduct(numbers, 440979000); // -> [1, 3]

  std::cout << "[";
  bool printComma = false;
  for (int n : res) {
    if (printComma)
      std::cout << ", ";
    std::cout << n;
    printComma = true;
  }
  std::cout << "]" << std::endl;
}
