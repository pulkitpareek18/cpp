#include <iostream>
using namespace std;

// Function that modifies the original variable
void updateValue(int &num) {
    num += 10; // Increment the original variable by 10
}

int main() {
    int myNumber = 5;
    cout << "Before: " << myNumber << endl; 
    
    // Call by reference
    updateValue(myNumber);
    
    cout << "After: " << myNumber << endl; 
    return 0;
}

// Output
// Before: 5
// After: 15
