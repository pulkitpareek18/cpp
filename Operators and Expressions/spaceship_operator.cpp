#include <compare>
#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int b = 10;

    if (a <=> b < 0) {
        cout << "a is less than b" << endl;
    } else if (a <=> b > 0) {
        cout << "a is greater than b" << endl;
    } else {
        cout << "a is equal to b" << endl;
    }

    return 0;
}

// Output
// a is less than b
