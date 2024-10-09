#include <iostream>

using namespace std;

int main() {
    int a = 10, b = 20;

    // Using the ternary operator to find the maximum value
    int max = (a > b) ? a : b;

    cout << "The maximum value is: " << max << endl; // Outputs: The maximum value is: 20

    return 0;
}

// Output
// The maximum value is: 20