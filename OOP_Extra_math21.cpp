#include <iostream>
using namespace std;

int main(){
    int input;
    cin >> input;
    long long int ans = 1;
    for (int i=1; i<=input; i++) {
        ans *= i;
    }
    cout << ans << endl;
    return 0;
}
