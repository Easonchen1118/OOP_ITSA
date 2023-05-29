#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    int square = (x*x) + (y*y);
    if (square <= 10000) {
        cout << "inside" << endl;
    }
    else {
        cout << "outside" << endl;
    }
    return 0;
}
