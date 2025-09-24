#include <iostream>

using namespace std;

int main() {
	while(true){
	
  int year;

  cout << "Enter a year: ";
  cin >> year;

  if (year % 400 == 0) {
    cout << year << " is a leap year." << endl<<endl;
  } else if (year % 4 == 0 && year % 100 != 0) {
    cout << year << " is a leap year." << endl<<endl;
  } else {
    cout << year << " is not a leap year." << endl<<endl;
  }
    char choice;
    cout << "Do You want to Restart? (y/n): ";
    cin >> choice;

    if (choice == 'y') continue; 
    else if (choice == 'n') break; 
    else cout << "Invalid input. Please try again." << endl;
  return 0;
}
}

