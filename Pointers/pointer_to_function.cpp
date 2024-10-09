#include <iostream>

using namespace std;

// Define the addition function
int add(int a, int b) {
    return a + b;
}

// Define the subtraction function
int subtract(int a, int b) {
    return a - b;
}

int main() {
    // Create an array of function pointers
    int (*p[2])(int, int) = {add, subtract}; // p[0] points to add, p[1] points to subtract

    // Call the functions using the function pointer array
    cout << "Addition: " << p[0](10, 5) << endl;      // Outputs: 15
    cout << "Subtraction: " << p[1](10, 5) << endl;   // Outputs: 5

    return 0;
}

// Output
// Addition: 15
// Subtraction: 5