#include <vector>
#include <iostream>

// int sumNumbersRecursive(std::vector<int> numbers) {
//   int total = 0;
//   std::vector<int> cpy;
//   if (numbers.empty()) return 0;
//   total += numbers[0];
//   cpy.insert(cpy.begin(), std::next(numbers.begin()), numbers.end());
//   total += sumNumbersRecursive(cpy);
//   return total;
// }

int sumNumbersRecursive(std::vector<int> numbers) {
  if (numbers.empty()) return 0;
  return numbers[0] + sumNumbersRecursive(std::vector<int>(numbers.begin() + 1, numbers.end()));
}

void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
  std::cout << sumNumbersRecursive({123456789, 12345678, 1234567, 123456, 12345, 1234, 123, 12, 1, 0}); // -> 137174205
}
