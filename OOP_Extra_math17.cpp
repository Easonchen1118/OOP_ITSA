#include <iostream>
using namespace std;

int main(){
    int num1, num2, ans = 1, min;
    cin >> num1 >> num2;
    if (num1 > num2) {
        min = num2;
    }
    else {
        min = num1;
    }
    for (int i=1; i<=min; i++){
        if ((num1 % i == 0) &&(num2 % i == 0)) {
            ans = i;
        }
    }
    cout << ans <<endl;
    return 0;
}
