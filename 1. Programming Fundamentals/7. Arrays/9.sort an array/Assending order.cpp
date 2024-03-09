#include <iostream>
using namespace std;

void selectionSortDescending(int arr[], int n) {
  for (int i = 0; i < n - 1; ++i) {
    int maxIndex = i;
    for (int j = i + 1; j < n; ++j) {
      if (arr[j] > arr[maxIndex]) {
        maxIndex = j;
      }
    }
    // Swap the found maximum element with the current position
    if (maxIndex != i) {
      swap(arr[i], arr[maxIndex]);
    }
  }
}

int main() {
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int n = sizeof(arr) / sizeof(arr[0]);

  selectionSortDescending(arr, n);

  cout << "Sorted array (descending - Selection Sort): ";
  for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
