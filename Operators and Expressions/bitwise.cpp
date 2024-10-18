# include <iostream>
using namespace std;

int main(){
	int a = 1;
	int b = 2;
	int c;
	
	c = a&b;
	cout << "A&B: " << c << endl;
	c = a|b;
	cout << "A|B: " << c << endl;
	c = a^b;
	cout << "A^B: " << c << endl;
	c = ~a;
	cout << "~A: " << c << endl;
	
	int d = ~--a+b-a++/b+c--^a&c|b+7;
	cout << "ol~--a+b-a++/b+c--^a&c|b+7: " << d << endl;
}

// Output
// A&B: 0
// A|B: 3
// A^B: 3
// ~A: -2
// ~--a+b-a++/b+c--^a&c|b+7: -1