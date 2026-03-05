#include <iostream>

long factorial(int n) {
  if (n <= 0) return 1;
  return n * factorial(n - 1);
}

void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
  std::cout << factorial(18); // -> 6
}
