#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;  // Base cases: F(0) = 0, F(1) = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case: F(n) = F(n-1) + F(n-2)
    }
}

int main() {
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Invalid input: Fibonacci sequence starts from 0." <<endl;
        return 1;  // Indicate error
    }

    int fib_num = fibonacci(num);
    cout<< "The " << num << "th Fibonacci number is: " << fib_num <<endl;

    return 0;
}
