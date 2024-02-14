#include <iostream>

using namespace std;

void printArray(const int* arr, int size) { // Function to print array
    if (size == 0) {
        cout << "Empty array." << endl;
        return; // Handle empty array gracefully
    }

    cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int arraySize = 10; // Define array size (change if needed)
    int myArray[arraySize]; // Declare array

    cout << "Enter " << arraySize << " elements for the array:" << endl;
    for (int i = 0; i < arraySize; ++i) {
        cin >> myArray[i];
    }

    printArray(myArray, arraySize); // Pass array and its size to function

    return 0;
}
