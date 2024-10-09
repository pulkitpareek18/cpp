#include <iostream>

using namespace std;

int main() {
    int intValue = 10;
    float floatValue = intValue; // Implicit conversion from int to float

    cout << "Integer Value: " << intValue << endl; // Outputs: 10
    printf("Float Value: %.1f\n", floatValue); // Outputs: 10.0

    return 0;
}

// Output
// Integer Value: 10
// Float Value: 10.0