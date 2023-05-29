#include <iostream>
using namespace std;

int func(int num, int ans) {
    if (num == 0 || num == 1) {
        ans = num + 1;
    }
    else {
        int temp = num / 2;
        ans = func(num-1, ans) + func(temp, ans);
    }
    return ans;;
}

int main(){
    int input;
    cin >> input;
    int ans = 0;
    ans = func(input, ans);
    cout << ans << endl;
    return 0;
}
