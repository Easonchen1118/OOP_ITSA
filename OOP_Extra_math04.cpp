#include <iostream>
using namespace std;

int main(){
    int num1, num2, leftout;
    cin >> num1 >> num2;
    int ans = num1 + num2;
    cout << num1 << "+" << num2 << "=" << ans << endl;
    ans = num1 * num2;
    cout << num1 << "*" << num2 << "=" << ans << endl;
    ans = num1 - num2;
    cout << num1 << "-" << num2 << "=" << ans << endl;
    ans = num1 / num2;
    leftout = num1 % num2;
    if (leftout < 0) {
        ans -= 1;
        leftout += num2;
    }
    cout << num1 << "/" << num2 << "=" << ans << "..." << leftout << endl;
    return 0;
}
