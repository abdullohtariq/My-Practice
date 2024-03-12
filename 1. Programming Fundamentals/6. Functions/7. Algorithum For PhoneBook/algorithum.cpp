#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>

using namespace std;

bool findName(string name, // Name to search for
              ifstream& phonebookFile) { // Text file approach
  if (phonebookFile.is_open()) {
    string line;
    while (getline(phonebookFile, line)) {
      // Split line based on comma (delimiter)
      vector<string> tokens;
      stringstream ss(line);
      string token;
      while (getline(ss, token, ',')) {
        tokens.push_back(token);
      }
      // Check if first token (name) matches the search name
      if (tokens[0] == name) {
        return true; // Name found
      }
    }
  }
  return false; // Name not found
}

int main() {
  string nameToFind;
  cout << "Enter the name to search: ";
  getline(cin, nameToFind);

  // Text file approach (replace with your filename)
  ifstream phonebookFile("phonebook.txt");

  if (findName(nameToFind, phonebookFile)) {
    cout << nameToFind << " found in the phonebook." << endl;
  } else {
    cout << nameToFind << " not found in the phonebook." << endl;
  }

  phonebookFile.close();

  return 0;
}
