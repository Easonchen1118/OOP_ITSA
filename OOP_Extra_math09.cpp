#include <iostream>
using namespace std;

int main(){
    int num, ans = 1;
    cin >> num;
    if (num > 31) {
        cout << "Value of more than 31" << endl;
    }
    else {
        for (int i=0; i< num; i++) {
            ans *= 2;
        }
        cout << ans << endl;
    }
    return 0;
}
