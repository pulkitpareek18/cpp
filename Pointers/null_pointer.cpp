#include <iostream>

using namespace std;

int main() {
    int* ptr = nullptr; // Null pointer

    if (ptr == nullptr) {
        cout << "Pointer is null." << endl; // Outputs: Pointer is null.
    }

    return 0;
}

// Output
// Pointer is null.