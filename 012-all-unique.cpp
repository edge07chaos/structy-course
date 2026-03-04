#include <vector>
#include <string>
#include <iostream>
#include <unordered_set>

bool allUnique(std::vector<std::string> items) {
  std::unordered_set<std::string> set(items.begin(), items.end());
  return set.size() == items.size();
}

void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
  std::cout << allUnique({"q", "r", "s", "a", "r", "z"}); // -> 0 (false)
}
