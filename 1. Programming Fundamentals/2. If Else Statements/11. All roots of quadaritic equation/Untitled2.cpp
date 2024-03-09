#include <iostream>
#include <cmath>

using namespace std;

int main() {
  
  double a, b, c, discriminant, root1, root2;

  
  cout << "Enter the coefficient of x^2 (a): ";
  cin >> a;
  if (a == 0) {
    cout << "Error: a cannot be 0. Please try again." << endl;
    return 1;
  }
  cout << "Enter the coefficient of x (b): ";
  cin >> b;
  cout << "Enter the constant term (c): ";
  cin >> c;

  
  discriminant = b * b - 4 * a * c;

  
  if (discriminant > 0) {
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);
    cout << "The roots are real and different:" << endl;
    cout << "root1 = " << root1 << endl;
    cout << "root2 = " << root2 << endl;
  } else if (discriminant == 0) { 
    root1 = -b / (2 * a);
    cout << "The roots are real and equal:" << endl;
    cout << "root1 = root2 = " << root1 << endl;
  } else { 
    double realPart = -b / (2 * a);
    double imagPart = sqrt(-discriminant) / (2 * a);
    cout << "The roots are complex and imaginary:" << endl;
    cout << "root1 = " << realPart << "+" << imagPart << "i" << endl;
    cout << "root2 = " << realPart << "-" << imagPart << "i" << endl;
  }

  return 0;
}

