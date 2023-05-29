#include <iostream>
using namespace std;

int main(){
    int price;
    cin >> price;
    int ten = price / 10;
    price -= (ten * 10);
    int five = price / 5;
    price -= (five * 5);
    int one = price;
    cout << "NT10=" << ten << endl;
    cout << "NT5=" << five << endl;
    cout << "NT1=" << one << endl;
    return 0;
}
