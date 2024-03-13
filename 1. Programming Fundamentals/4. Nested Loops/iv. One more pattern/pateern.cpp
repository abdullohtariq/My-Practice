#include <iostream>

using namespace std;

int main() {
  int rows = 5;  // Number of rows (and columns) in the square

  for (int i = 1; i <= rows; ++i) {
    for (int j = 1; j <= rows; ++j) {
      cout << "*";
    }
    cout << endl;  // Move to a new line after each row
  }

  return 0;
}

