#include <iostream>
using namespace std;

int main() {
    int num = 5;
    int *ptr = &num; // ptr points to num

    cout << "Value of num: " << num << endl;       // Outputs: 5
    cout << "Value via pointer: " << *ptr << endl; // Outputs: 5

    *ptr = 10; // Change the value of num through the pointer
    cout << "New value of num: " << num << endl;   // Outputs: 10

    return 0;
}

// Output
// Value of num: 5
// Value via pointer: 5
// New value of num: 10