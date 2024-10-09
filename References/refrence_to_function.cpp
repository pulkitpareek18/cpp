#include <iostream>

using namespace std; 

// Define two functions
int add(int a, int b) {
    return a + b;
}

int main() {
    // Reference to the add function
    int (&addition)(int, int) = add;

    // Call the function using the reference
    cout << "Addition: " << addition(10, 5) << endl;

    return 0;
}

// Output
// Addition: 15