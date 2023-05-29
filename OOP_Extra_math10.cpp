#include <iostream>
using namespace std;

int main(){
    double temp, ans;
    cin >> temp;
    ans = temp * 9;
    ans /= 5;
    ans += 32;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << ans << endl;
    return 0;
}
