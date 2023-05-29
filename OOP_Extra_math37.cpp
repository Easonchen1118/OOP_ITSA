#include <iostream>
using namespace std;

int main(){
    int xAxis, yAxis;
    cin >> xAxis >> yAxis;
    if (xAxis == 0 && yAxis == 0) {
        cout << "Origin" << endl;
    }
    else if (xAxis == 0) {
        cout << "y-axis" << endl;
    }
    else if (yAxis == 0) {
        cout << "x-axis" << endl;
    }
    else if (xAxis > 0 && yAxis > 0) {
        cout << "1st Quadrant" << endl;
    }
    else if (xAxis < 0 && yAxis > 0) {
        cout << "2nd Quadrant" << endl;
    }
    else if (xAxis < 0 && yAxis < 0) {
        cout << "3rd Quadrant" << endl;
    }
    else if (xAxis > 0 && yAxis < 0) {
        cout << "4th Quadrant" << endl;
    }
    return 0;
}
