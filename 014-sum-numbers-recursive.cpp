#include <vector>
#include <iostream>

int sumNumbersRecursive(std::vector<int> numbers) {
  int total = 0;
  std::vector<int> cpy;
  if (numbers.empty()) return 0;
  total += numbers[0];
  cpy.insert(cpy.begin(), std::next(numbers.begin()), numbers.end());
  total += sumNumbersRecursive(cpy);
  return total;
}

void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
  std::cout <<sumNumbersRecursive({700, 70, 7}); // -> 777
}
