#include <iostream>
#include <string>
using namespace std;

// Function that takes an lvalue reference
void processLvalue(string& str) {
    cout << "Lvalue reference called (modifiable): " << str << endl;
    str += " [modified]";
}

// Function that takes an rvalue reference
void processRvalue(string&& str) {
    cout << "Rvalue reference called: " << str << endl;
    str += " [temporary]";
}

// Function returning lvalue reference (returns a reference to a global variable)
string& getLvalue() {
    static string value = "Global Lvalue";  // Static ensures it's not temporary
    return value;  // Lvalue is returned
}

// Function returning rvalue (returns a temporary string object)
string getRvalue() {
    return "Temporary Rvalue";  // Temporary object
}

int main() {
    // Part 1: Passing Lvalues and Rvalues
    string myStr = "Hello, World!";
    
    // Passing lvalue reference
    processLvalue(myStr);  // Modifies the original string
    cout << "After processLvalue: " << myStr << endl;

    // Passing rvalue reference (by explicitly moving)
    processRvalue(move(myStr));  // Use move() to cast myStr as an rvalue
    cout << "After processRvalue: " << myStr << endl;

    // Passing a true rvalue (temporary object)
    processRvalue("Temporary String");

    // Part 2: Returning Lvalues and Rvalues

    // Getting and using an lvalue reference
    string& lvalueStr = getLvalue();
    cout << "Lvalue returned: " << lvalueStr << endl;

    // Modify the returned lvalue
    lvalueStr = "Modified Lvalue";
    cout << "After modifying lvalue: " << getLvalue() << endl;

    // Getting and using an rvalue (temporary value)
    string rvalueStr = getRvalue();  // This is a copy of the returned temporary
    cout << "Rvalue returned: " << rvalueStr << endl;

    return 0;
}


// Output:

// Lvalue reference called (modifiable): Hello, World!
// After processLvalue: Hello, World! [modified]
// Rvalue reference called: Hello, World! [modified]
// After processRvalue: Hello, World! [modified] [temporary]
// Rvalue reference called: Temporary String
// Lvalue returned: Global Lvalue
// After modifying lvalue: Modified Lvalue
// Rvalue returned: Temporary Rvalue