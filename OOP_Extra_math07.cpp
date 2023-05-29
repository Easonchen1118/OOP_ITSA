#include <iostream>
using namespace std;

int main(){
    int input;
    cin >> input;
    cout << input << " ";
    int ans = input * input;
    cout << ans << " ";
    ans *= input;
    cout << ans <<endl;
    return 0;
}
