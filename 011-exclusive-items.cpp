#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>

std::vector<int> exclusiveItems(std::vector<int> a, std::vector<int> b) {
  std::vector<int> vec;
  std::unordered_set<int> a_set;

  if (a == b) return {};
  for (int av:a)
    a_set.insert(av);
  for (int bv:b) {
    if (a_set.find(bv) == a_set.end())
      a_set.insert(bv);
    else
      a_set.erase(bv);
  }
  vec.insert(vec.begin(), a_set.begin(), a_set.end());
  return vec;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
  std::vector<int> a;
  std::vector<int> b;
  for (int i = 0; i < 32000; i += 1) {
    a.push_back(i);
     b.push_back(i);
  }
  std::vector<int> vec = exclusiveItems(a, b); // -> [4,1,3,9,10]


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
