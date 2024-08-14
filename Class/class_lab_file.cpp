# include <iostream>
using namespace std;

class Box{
    int length, breadth, height;

    public:
    void setDimensions(int l, int b, int h){
        length = l;
        breadth = b;
        height = h;
    }

    int area(){
        return 2*((length*breadth)+(breadth*height)+(height*length));
    }

    int volume(){
        return length*breadth*height;
    }
};

int main(){
    class Box box1; // Create object of class Box named box1
    box1.setDimensions(1,2,3);
    cout << "The area of Box 1 is: " << box1.area() << endl;
    cout << "The volume of Box 1 is: " << box1.volume() << endl;

    return 0;
}

// Output:
// The area of Box 1 is: 22
// The volume of Box 1 is: 6