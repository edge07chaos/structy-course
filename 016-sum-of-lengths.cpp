#include <vector>
#include <string>
#include <iostream>

int sumOfLengths(std::vector<std::string> strings) {
  if (strings.empty()) return 0;
  return strings[0].length() + sumOfLengths(std::vector<std::string>(strings.begin() + 1, strings.end()));
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
  std::cout << sumOfLengths({"goat", "cat", "purple"}); // -> 13
}
