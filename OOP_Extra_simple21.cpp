#include <iostream>
using namespace std;

int main(){
    float number[10];
    for (int i=0; i<10; i++) {
        cin >> number[i];
    }
    int max = 0;
    int min = 0;
    for (int i=1; i<10; i++) {
        if (number[i] > number[max]) {
            max = i;
        }
        if (number[i] < number[min]) {
            min = i;
        }
    }
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "maximum:" << number[max] << endl;
    cout << "minimum:" << number[min] << endl;
    return 0;
}
