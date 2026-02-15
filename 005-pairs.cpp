#include <vector>
#include <string>
#include <iostream>

/*std::vector<std::vector<std::string>> pairs(std::vector<std::string> elements) {
  std::vector<std::vector<std::string>> result;
  if (elements.size() == 1)
    return (result.push_back(elements), result);
  std::vector<std::string> tmp;
  for (size_t i = 0; i < elements.size(); ++i) {
        for (size_t j = i + 1; j < elements.size(); ++j) {
          tmp.push_back(elements[i]);
          tmp.push_back(elements[j]);
          result.push_back(tmp);
          tmp.clear();
        }
    }
  return result;
}*/

std::vector<std::vector<std::string>> pairs(std::vector<std::string> elements) {
  std::vector<std::vector<std::string>> result;
  if (elements.size() == 1)
    return (result.push_back(elements), result);
  for (auto vecRef = elements.begin(); vecRef != elements.end(); ++vecRef)
    for (auto innerVecRef = std::next(vecRef); innerVecRef != elements.end(); ++innerVecRef)
      result.push_back({*vecRef, *innerVecRef});
  return result;
}

void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
  std::vector<std::vector<std::string>> vec = pairs({"cherry", "cranberry", "banana", "blueberry", "lime", "papaya"}); // ->
// [ 
//   [ "cherry", "cranberry" ], 
//   [ "cherry", "banana" ], 
//   [ "cherry", "blueberry" ], 
//   [ "cherry", "lime" ], 
//   [ "cherry", "papaya" ], 
//   [ "cranberry", "banana" ], 
//   [ "cranberry", "blueberry" ], 
//   [ "cranberry", "lime" ], 
//   [ "cranberry", "papaya" ], 
//   [ "banana", "blueberry" ], 
//   [ "banana", "lime" ], 
//   [ "banana", "papaya" ], 
//   [ "blueberry", "lime" ], 
//   [ "blueberry", "papaya" ], 
//   [ "lime", "papaya" ] 
// ] 

  for (const auto& vRef:vec) {
    std::cout << "[\"";
    for (auto innerVRef = vRef.begin(); innerVRef != vRef.end(); ++innerVRef) {
        std::cout << *innerVRef << "\"";
      if (std::next(innerVRef) != vRef.end())
        std::cout << ",";
    }
     std::cout << "]" << std::endl;
  }
}
