#include <iostream>
using namespace std;

int main(){
    int num, ans = 0;
    cin >> num;
    for (int i=1; i<=num; i++) {
        if (i % 2 == 0 && i % 3 == 0 && i % 12 != 0) {
            ans += i;
        }
    }
    cout << ans << endl;
    return 0;
}
