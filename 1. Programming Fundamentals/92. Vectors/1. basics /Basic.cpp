#include<iostream>
#include <vector>
using namespace std;
int main(){
    



  // Create a vector to store integers
  vector<int> numbers;

  // Add elements to the vector
  numbers.push_back(10);
  numbers.push_back(20);
  numbers.push_back(30);

  // Print the size of the vector
  cout << "Number of elements: " << numbers.size() <<endl;

  // Access elements using their index (starts from 0)
  cout << "First element: " << numbers[0] << endl;
  cout << "Second element: " << numbers[1] << endl;

  // Iterate through the vector using a loop
  cout << "Elements: ";
  for (int number : numbers) {
    cout << number << " ";
  }
  cout << endl;

  return 0;
}