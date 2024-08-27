# include <iostream>
using namespace std;

enum TrafficLights { 
    RED, 
    YELLOW, 
    GREEN }color;

string EnumToString(TrafficLights color) {
    switch (color) {
        case RED: return "Red";
        case YELLOW: return "Yellow";
        case GREEN: return "Green";
        default: return "Unknown";
    }
}

int main() {
    cout << "The color is " << EnumToString(color) << endl;
    color = YELLOW;
    cout << "The color is " << EnumToString(color) << endl;
    return 0;
}
 
// Output
// The color is Red
// The color is Yellow