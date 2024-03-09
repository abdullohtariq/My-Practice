#include <iostream>

using namespace std;

int main() {
  // Declare an array to store marks for 4 subjects
  int marks[4];

  // Loop to get marks for each subject
  for (int i = 0; i < 4; ++i) {
    cout << "Enter marks for subject " << (i + 1) << ": ";
    cin >> marks[i];

    // Validate if marks are within range (0-100)
    
    while (marks[i] < 0 || marks[i] > 100) {
      cout << "Invalid marks. Please enter marks between 0 and 100: ";
      cin >> marks[i];
    }
  }

  // Calculate total marks
  int total_marks = 0;
  for (int i = 0; i < 4; ++i) {
    total_marks += marks[i];
  }

  // Calculate total percentage
  float percentage = (float)total_marks / (4 * 100) * 100;

  // Print the total percentage
  cout << "Total percentage: " << percentage << "%\n";

  return 0;
}

