#include <iostream>

using namespace std;

int main() {
    int number, factorial = 1;

    cout << "Enter a non-negative integer: ";
    cin >> number;

    // Check for invalid input (negative number)
    if (number < 0) {
        cout << "Error: Factorial is not defined for negative numbers." << endl;
        return 1;
    }

    // Calculate factorial using loop
    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }

    cout << "The factorial of " << number << " is: " << factorial << endl;

    return 0;
}
