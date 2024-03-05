#include <iostream>

using namespace std;

// Function to calculate factorial 
int factorial(int n) {
  // Base case: factorial of 0 and 1 is 1
  if (n == 0 || n == 1) {
    //cause the fictorial of 0 and 1 is always 1
    return 1;
  } else {
    // Recursive case: factorial of n is n * (n-1)!
    //everytime n is decereasing one time so it is going from n to 0
    return n * factorial(n - 1);
  }
}

int main() {
  int num;

  cout << "Enter a non-negative number: ";
  cin >> num;

  // Check for negative input
  if (num < 0) {
    cout << "Error: Factorial is not defined for negative numbers." << endl;
    return 1;
  }

  int fact = factorial(num);
  cout << "The factorial of " << num << " is " << fact << endl;

  return 0;
}
