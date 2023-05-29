#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    int down, height;
    cin >> down >> height;
    double area;
    area = down * height;
    area /= 2;
    cout << area << endl;
    return 0;
}
