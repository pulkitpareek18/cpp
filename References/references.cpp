# include <iostream>
using namespace std;

int main(){
    int a = 11;
    int &b = a; // b is a refrence to a
    cout << a << endl;
    cout << &a << endl;
    cout << &b << endl; // &b gives address of referent variable a
}

// Output
// 11
// 0x7fffffffd0fc
// 0x7fffffffd0fc