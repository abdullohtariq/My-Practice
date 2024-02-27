#include <iostream>

using namespace std;

void print_numbers(int n) {
  // Base case: if n is 0, do nothing
  if (n == 0) {
    return;
  }

  // Recursive case: print n and then call the function with n-1
  print_numbers(n - 1);
  cout << n << " ";
}

int main() {
  int num;

  cout << "Enter a positive number: ";
  cin >> num;

  // Check for non-positive input
  if (num <= 0) {
    cout << "Error: Please enter a positive number." << endl;
    return 1;
  }

  cout << "Numbers from 1 to " << num << ": ";
  print_numbers(num);
  cout << endl;

  return 0;
}
