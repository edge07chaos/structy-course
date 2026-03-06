#include <string>
#include <iostream>

std::string reverseString(std::string s) {
  if (s.empty()) return "";
  return reverseString(s.c_str() + 1) + s[0];  
}

void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
   std::cout << reverseString("eerf si mroftalp siht ?rof gnitiaw uoy era tahw "); 
  // ->                       "what are you waiting for? this platform is free"
}
