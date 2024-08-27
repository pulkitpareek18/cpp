# include <iostream>
using namespace std;

void fun();

int main(){
    #define PI 3.14159 // Scope of PI is till the end of the file
    double pi = 3.14159; // Scope of pi is till the end of the main function
    cout << "The value of PI is: " << PI << endl; // Define Statement
    cout << "The value of pi is: " << pi << endl; // Constant Variable
    fun(); 
    return 0;
}

void fun(){
    cout << "The value of PI is: " << PI << endl; 
}

// Output
// The value of PI is: 3.14159
// The value of pi is: 3.14159
// The value of PI is: 3.14159