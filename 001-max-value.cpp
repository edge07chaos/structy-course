#include <iostream>
#include <vector>
#include <limits>

float maxValue(std::vector<float> vec) {
  if (vec.empty()) return 0;
  if (vec.size() == 1) return vec.front();
  float max = vec.front();
  std::for_each(vec.begin() + 1, vec.end(), [&max](float n) {
    if (n > max) max = n;
  });
  return max;
}


// this function behaves as `main()` for the 'run' command
// you may sandbox in this function, but should not remove it
void run() {
  std::vector<float> numbers{-3, -5, -1};
  std::cout << maxValue(numbers) << std::endl;
  std::cout << "int-min " << std::numeric_limits<int>::min() << std::endl;
  std::cout << "int-max " << std::numeric_limits<int>::max() << std::endl;

  std::cout << "float-min " << std::numeric_limits<float>::min() << std::endl;
  std::cout << "float-max " << std::numeric_limits<float>::max() << std::endl;
}
