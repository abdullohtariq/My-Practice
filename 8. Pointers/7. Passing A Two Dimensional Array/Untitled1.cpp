#include <iostream>

using namespace std;

int sum_2d_array(int arr[][3], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

int main() {
	/*/What are 2 Dinmensional Array?
	the below array meanns that	we are creating two arrays of 
	3 elements each.
	/*/
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

	//instead of integar now the 2 in places represents 2 array.
	//so when we use (&B+1) Instead of going to next integar we are going towards 
	//the next array which also have three integers
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    int sum = sum_2d_array(arr, rows, cols);

    cout << "The sum of all elements in the 2D array is: " << sum << endl;

    return 0;
}

	
	
	



