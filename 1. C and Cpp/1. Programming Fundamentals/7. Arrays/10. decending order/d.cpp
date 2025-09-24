#include <iostream>
#include <algorithm>

bool compareDescending(int a, int b) {
  return a > b; // Sorts elements in descending order
}

int main() {
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int n = sizeof(arr) / sizeof(arr[0]);

  std::sort(arr, arr + n, compareDescending); // Use custom compare function

  std::cout << "Sorted array (descending): ";
  for (int i = 0; i < n; ++i) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
