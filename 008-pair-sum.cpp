#include <array>
#include <vector>
#include <iostream>
#include <unordered_map>

/*
PROBLEM:
Write a function, pairSum, that takes in a vector of numbers and a target sum as arguments.
The function should return a std::array containing a pair of indices whose elements sum to the given target.
The indices returned must be unique.
Be sure to return the indices, not the elements themselves.
There is guaranteed to be one such pair that sums to the target.

example:
std::vector<int> numbers { 3, 2, 5, 4, 1 };
pairSum(numbers, 8); // -> [0, 2]
*/

// O(n^2)
// std::array<int, 2> pairSum(std::vector<int> numbers, int target) {
//   std::array<int, 2> pair = {numbers.at(0), numbers.at(1)};
//   for (size_t i = 0; i < numbers.size(); i++) {
//     pair.at(0) = i;
//     for (size_t j = i + 1; j < numbers.size(); j++) {
//       if (numbers[pair[0]] + numbers[j] == target)
//       {
//         pair.at(1) = j;
//         return pair;
//       }
//     }
//   }
//   return pair;
// }

// O(n)
std::array<int, 2> pairSum(std::vector<int> numbers, int target) {
  std::array<int, 2> pair  {};
  std::unordered_map<int, int> map;
  for (size_t i = 0; i < numbers.size(); i++) {
    int complememt = target - numbers.at(i);
    if (map.contains(complememt))
    {
      pair.at(0) = map[complememt];
      pair.at(1) = i;
      break ;
    }
    map[numbers.at(i)] = i;
  }
  return pair;
}

void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
  std::vector<int> numbers;
  for (int i = 0; i <= 21000; i += 1) {
    numbers.push_back(i);
  }
  std::array<int, 2> res = pairSum(numbers, 41999); // -> [ 20999, 21000 ] 
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
