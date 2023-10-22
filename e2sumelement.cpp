#include <iostream>
#include <vector>

int sum_element(std::vector<int> &arr) {
  auto positive_number =
      std::remove_if(arr.begin(), arr.end(), [](int num) { return num <= 0; });

  arr.erase(positive_number, arr.end());

  if (arr.empty()) {
    return 0;
  } else if (arr.size() <= 3) {
    int sum = 0;
    for (int num : arr) {
      sum += num;
    }
    return sum;
  } else {
    return arr[0] + arr[1] + arr[2];
  }
}

int main() {
  // std::vector<int> arr = {};
  std::vector<int> arr = {1, 1, -1, -2, -3, 0, 0, 0, -5};
  // std::vector<int> arr = {-2, -1, 0, 1, 5, 2, 3, 4};
  std::cout << sum_element(arr) << std::endl << std::endl;
  for (int num : arr) {
    std::cout << num << std::endl;
  }
}
