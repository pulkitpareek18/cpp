#include <iostream>

using namespace std;

int main() {
    double doubleValue = 9.8;
    
    // C-style cast to int
    int intValue = (int)doubleValue;

    cout << "Double Value: " << doubleValue << endl; // Outputs: 9.8
    cout << "Integer Value (C-style): " << intValue << endl; // Outputs: 9

    return 0;
}

// Output
// Double Value: 9.8
// Integer Value (C-style): 9