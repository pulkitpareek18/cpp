// When a memory pointed by a pointer is deallocated the pointer becomes a dangling pointer.

#include <iostream>
#include <stdlib.h> // For malloc and free

using namespace std;

int main() {
    // Allocate memory for an integer
    int* ptr = (int*)malloc(sizeof(int));
    
    if (ptr == nullptr) {
        cout << "Memory allocation failed!" << endl;
        return 1; // Exit if memory allocation fails
    }

    // Free the allocated memory
    free(ptr);
    cout << "Memory freed" << endl;

    // Now ptr becomes a dangling pointer
    // Removing the dangling pointer
    ptr = nullptr;

    // Optional: Check if ptr is null before dereferencing
    if (ptr == nullptr) {
        cout << "Pointer is now safely set to nullptr." << endl;
    }

    return 0;
}

// Output
// Memory freed
// Pointer is now safely set to nullptr.