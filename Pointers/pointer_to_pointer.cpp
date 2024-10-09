#include <iostream>

using namespace std;

int main() {
    int value = 42;          // An integer variable
    int* ptr = &value;      // A pointer to the integer
    int** ptrToPtr = &ptr;  // A pointer to the pointer

    // Output the values and addresses
    cout << "Value: " << value << endl;               // Outputs: 42
    cout << "Pointer points to: " << *ptr << endl;    // Outputs: 42
    cout << "Pointer address: " << ptr << endl;       // Outputs address of value
    cout << "Pointer to pointer points to: " << **ptrToPtr << endl; // Outputs: 42
    cout << "Pointer to pointer address: " << ptrToPtr << endl; // Outputs address of ptr

    // Modifying the value using the pointer to pointer
    **ptrToPtr = 100;  // Changing the value of 'value' to 100

    cout << "New Value: " << value << endl;            // Outputs: 100

    return 0;
}

// Output
// Value: 42
// Pointer points to: 42
// Pointer address: 0x5052e8
// Pointer to pointer points to: 42
// Pointer to pointer address: 0x5052e4
// New Value: 100