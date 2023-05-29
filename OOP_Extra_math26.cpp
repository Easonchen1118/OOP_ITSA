#include <iostream>
using namespace std;

int main(){
    int input;
    cin >> input;
    for (int i=1; i<=input; i++) {
        int ans = i * i;
        cout << i << "*" << i << "=" << ans <<endl;
    }
    return 0;
}
