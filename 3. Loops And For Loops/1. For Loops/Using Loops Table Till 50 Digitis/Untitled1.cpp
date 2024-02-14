#include <iostream>

using namespace std;

int main() {
	
  int digital;
  cout << "Enter a digital: ";
  cin >> digital;
  
  for (int i = 1; i <= 50; ++i) {
    cout << digital << " * " << i << " = " << digital * i << endl;
  }

  return 0;
}

