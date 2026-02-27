#include <vector>
#include <iostream>
//#include <algorithm>
#include <unordered_set>

std::vector<int> intersection(std::vector<int> a, std::vector<int> b) {
  std::vector<int> vec;
  std::unordered_set<int> set;
  
    for (auto& value : a)
        set.insert(value);
  
    for (auto& value : b) {
      if (set.empty()) break;
      if (set.find(value) != set.end()) {
        set.erase(value);
        vec.push_back(value);
      }
    }
  //std::sort(vec.begin(), vec.end());
  return vec;
}

void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
std::vector<int> a;
std::vector<int> b;
for (int i = 0; i < 320; i += 1) {
  a.push_back(i);
  b.push_back(i);
}
  std::vector<int> vec = intersection(a, b); // -> [2,6]

  std::cout << "[";
  bool after_begin = false;
  for (auto& v : vec) {
    if (after_begin)
      std::cout << ",";
    std::cout << v;
    after_begin = true;
  }
  std::cout << "]\n";
}
