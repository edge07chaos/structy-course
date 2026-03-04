#include <vector>
#include <string>
#include <iostream>
#include <unordered_map>

std::vector<std::string> intersectionWithDupes(std::vector<std::string> a, std::vector<std::string> b) {
  std::vector<std::string> vec;
  std::unordered_map<std::string, int> aMap;
  std::unordered_map<std::string, int> bMap;
  
  for (auto aValue:a) aMap[aValue]++;
  for (auto bValue:b) bMap[bValue]++;
  
  // for (auto b_value: b) {
  //   if (aMap.contains(b_value) && aMap[b_value] > 0) {
  //     aMap[b_value]--;
  //     vec.push_back(b_value);
  //   }
  // }
  for (auto [aKey, aValue]:aMap) {
    if (bMap.contains(aKey))
      for (int i = 0; i < std::min(aValue, bMap[aKey]); i++)
        vec.push_back(aKey);
  }
  return vec;
}

void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
std::vector<std::string> a;
std::vector<std::string> b;
for (int i = 0; i < 2100; i += 1) {
  a.push_back(std::to_string(i));
  b.push_back(std::to_string(i));
}
 std::vector<std::string> vec = intersectionWithDupes(a, b); // -> ["a", "a", "a", "a"]


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
