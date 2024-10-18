#include <iostream>
using namespace std;

int main() {
    // 2D array (3x3)
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Pointer to an array of 3 integers (points to the entire 2D array)
    int (*ptr)[3] = arr;

    // Accessing array elements using the pointer to the entire array
    cout << "Elements of the 2D array using pointer to the array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // Accessing elements via pointer to the 2D array
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Output:

// Elements of the 2D array using pointer to the array:
// 1 2 3 
// 4 5 6 
// 7 8 9 