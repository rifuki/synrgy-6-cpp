#include <iostream>
#include <vector>

int find_smallest_positive_number(std::vector<int> &arr) {
  if (arr.empty()) {
    return 1;
  }

  arr.erase(
      std::remove_if(arr.begin(), arr.end(), [](int num) { return num < 0; }),
      arr.end());

  std::sort(arr.begin(), arr.end());

  int smallest_positive_number = 1;

  for (int num : arr) {
    if (num == smallest_positive_number) {
      smallest_positive_number++;
    }
    if (num > smallest_positive_number) {
      break;
    }
  }

  return smallest_positive_number;
}

int main() {
  std::vector<int> arr = {100, -20, 1, 3, 8, 4, 3, 2, 5, 6, 7};

  std::cout << "the smallest positive value that does not exist: "
            << find_smallest_positive_number(arr) << std::endl;
}
