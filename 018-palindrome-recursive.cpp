#include <string>
#include <iostream>

bool palindrome(std::string s) {
  // if (s.size() <= 1)
  if (s.empty() || s.size() == 1) return true;
  if (s[0] != s[s.size() - 1]) return false;
  return palindrome(s.substr(1, s.size() - 2));
}

void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
  std::cout << palindrome("rotator"); // -> 1 (true)
}
