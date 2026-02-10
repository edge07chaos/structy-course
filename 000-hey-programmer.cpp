#include <iostream>

std::string greet(std::string s) {
  return "hey " + s;
}

void run() {
 std::cout << greet("fabio") << std::endl;
}
