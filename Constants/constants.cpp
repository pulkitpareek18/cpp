#include <iostream>
#include <string>  // for std::string
#include <cmath>   // for math functions

using namespace std;  // Use the standard namespace

// Preprocessor constant
#define MAX_BUFFER_SIZE 1024  // Symbolic constant using preprocessor directive

// Constants using 'const' keyword
const int DAYS_IN_WEEK = 7;       // Integer constant
const double PI = 3.141592653589; // Floating-point constant
const char GRADE = 'A';           // Character constant

// Const string in C++
const string GREETING = "Hello, World!";  // C++ string constant

// Using 'constexpr' for compile-time evaluation
constexpr int square(int n) {
    return n * n;  // Constant expression, evaluated at compile-time
}

int main() {
    // 1. Integer Constants (numeric constants)
    int age = 25;            // Example of an integer constant
    unsigned int positiveNum = 100u;  // Unsigned integer constant
    long long largeNum = 123456789LL; // Long long integer constant
    
    // 2. Floating-point Constants
    float gravity = 9.81f;   // Single-precision floating-point constant
    double speedOfLight = 299792458.0; // Double-precision floating-point constant
    
    // 3. Character Constants
    char letter = 'B';       // Single character constant
    char newline = '\n';     // Escape sequence character constant

    // 4. String Constants (C-style and C++-style)
    const char* message = "Welcome to C++ programming!";  // C-style string constant
    const string welcome = "C++ String Example";          // C++-style string constant

    // 5. Boolean Constants
    bool isActive = true;  // Boolean constant (true/false)
    
    // 6. Const variables (symbolic constants)
    cout << "Days in a week: " << DAYS_IN_WEEK << endl;
    cout << "Value of PI: " << PI << endl;

    // 7. Constexpr - Compile-time evaluated constant
    cout << "Square of 10 (calculated at compile-time): " << square(10) << endl;

    // 8. Preprocessor constant
    cout << "Maximum buffer size: " << MAX_BUFFER_SIZE << endl;

    // Display various constants
    cout << "Integer constant (age): " << age << endl;
    cout << "Unsigned integer constant (positiveNum): " << positiveNum << endl;
    cout << "Long long constant (largeNum): " << largeNum << endl;
    cout << "Floating-point constant (gravity): " << gravity << endl;
    cout << "Speed of light (double constant): " << speedOfLight << " m/s" << endl;
    cout << "Character constant (letter): " << letter << endl;
    cout << "Character constant (newline): " << newline << endl;
    cout << "C-style string constant: " << message << endl;
    cout << "C++-style string constant: " << welcome << endl;
    cout << "Boolean constant (isActive): " << boolalpha << isActive << endl;

    return 0;
}


// Output:

// Days in a week: 7
// Value of PI: 3.14159
// Square of 10 (calculated at compile-time): 100
// Maximum buffer size: 1024
// Integer constant (age): 25
// Unsigned integer constant (positiveNum): 100
// Long long constant (largeNum): 123456789
// Floating-point constant (gravity): 9.81
// Speed of light (double constant): 2.99792e+08 m/s
// Character constant (letter): B
// Character constant (newline): 

// C-style string constant: Welcome to C++ programming!
// C++-style string constant: C++ String Example
// Boolean constant (isActive): true