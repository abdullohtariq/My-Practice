#include <iostream>
using namespace std;

int main() {
  while (true) {
    
    cout << "This is a Program That Gives the Maximum Number as output." << endl;
    int a, b, c;
    cout << "Give Your 1st Value: ";
    cin >> a;
    cout << "Give Your 2nd Value: ";
    cin >> b;
    cout << "Give Your 3rd Value: ";
    cin >> c;
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    cout <<endl << max << " is the maximum. "<<endl<<endl;

    
    char choice;
    cout << "Do You want to Restart? (y/n): ";
    cin >> choice;

    if (choice == 'y') continue; 
    else if (choice == 'n') break; 
    else cout << "Invalid input. Please try again." << endl;
  }
  return 0;
}

