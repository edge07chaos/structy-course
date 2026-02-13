#include <string>
#include <sstream>
#include <iostream>

std::string longestWord(std::string sentence) {
  std::string s, r;
  std::stringstream ss(sentence);
  
  while (std::getline(ss, s, ' ')) {
    if (s.length() >= r.length())
      r = s;
  }
  return r;
}

void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
  std::cout << longestWord("the quick brown fox jumped over the lazy dog"); // -> "jumped"
}
