#include <vector>
#include <iostream>

bool allEven(std::vector<int> nums) {
  for (auto n: nums)
    if (n % 2) return false;
  return true;
}

void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
  std::cout << allEven({ 42, 18, 96, 4, 70, 12, 58, 30, 84, 26 }); // -> 1 (true)
}
