#include <iostream>

using namespace std;

int main() {
    int num = 42;
    void* ptr = &num; // Void pointer

    // Cast to int pointer before dereferencing
    cout << "Value: " << *(int*)ptr << endl; // Outputs: Value: 42

    return 0;
}

// Output
// Value: 42