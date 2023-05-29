#include <iostream>
using namespace std;

int main(){
    int xAxis, yAxis;
    cin >> xAxis >>yAxis;
    if (xAxis <= 100 && yAxis <= 100) {
        cout << "inside" << endl;
    }
    else {
        cout << "outside" << endl;
    }
    return 0;
}
