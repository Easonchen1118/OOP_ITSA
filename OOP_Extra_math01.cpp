#include <iostream>
using namespace std;

int main(){
    int up, down, height;
    double area;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cin >> up >> down >> height;
    area = ((up + down) * height);
    area /= 2;
    cout << "Trapezoid area:" << area << endl;
    return 0;
}
