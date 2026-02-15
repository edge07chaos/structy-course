#include <math.h>
#include <iostream>

bool isPrime(int n) {
  if (n < 2) return false;
  int nn = sqrt(n);
  for(int i = 2; i <= nn; i++)
    if (n % i == 0) return false;
  return true;
}



void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
  std::cout << isPrime(999999);
}
