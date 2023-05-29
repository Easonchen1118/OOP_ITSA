#include <iostream>
using namespace std;

int main(){
    double length, area;
    cin >> length;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    area = length * length;
    area += 0.04;//因為有些不會自動四捨五入
    cout << area << endl;
    return 0;
}
