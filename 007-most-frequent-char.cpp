#include <string>
#include <iostream>
#include <unordered_map>

char mostFrequentChar(std::string s) {
  char maxKey = 0;
  std::unordered_map<char, int> count;
  
  for (auto& c : s)
      count[c]++;
  for (auto &c : s) {
    if (c == 0 || count[c] > count[maxKey])
        maxKey = c;
  }
  return maxKey;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
  std::cout <<mostFrequentChar(""); // -> 'r'
}
