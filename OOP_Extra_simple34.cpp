#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    int gender, height;
    double output;
    while (cin >> height >> gender) {
        if (gender == 1) {
            output = (height - 80) * 0.7;
        }
        else {
            output = (height - 70) * 0.6;
        }
        cout << output << endl;
    }
    
    return 0;
}
