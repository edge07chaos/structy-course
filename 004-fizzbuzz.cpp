#include <vector>
#include <string>
#include <iostream>

std::vector<std::string> fizzBuzz(int n) {
  std::vector<std::string> vec;
  for(int i = 1; i <= n; i++) {
    if (!(i % 3) && !(i % 5))
      vec.push_back("fizzbuzz");
    else if (!(i % 3))
      vec.push_back("fizz");
    else if (!(i % 5))
      vec.push_back("buzz");
    else
      vec.push_back(std::to_string(i));
  }
  return vec;
}

void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
  std::vector<std::string> vec = fizzBuzz(32);
  for (auto s: vec)
    std::cout << s << std::endl;
}
