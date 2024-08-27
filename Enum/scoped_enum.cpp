# include <iostream>
using namespace std;

enum class color{
    RED,
    YELLOW,
    GREEN
};

int main(){
    color c = color::YELLOW; // Scoped enum access using :: (scope resolution operator)
    cout <<"The integer value of YELLOW is: "<< (int)c << endl; // Typecasted to int
    return 0;
}
// Output
// The integer value of YELLOW is: 1