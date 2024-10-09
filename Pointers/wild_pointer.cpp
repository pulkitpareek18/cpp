#include <iostream>

using namespace std;

int main() {
    int* ptr; // Wild pointer (uninitialized)

    // Uncommenting the next line can lead to undefined behavior
    // cout << *ptr; // This would be a wild pointer dereference

    // Properly initialize before use
    ptr = nullptr; // Now it's safe

    return 0;
}
