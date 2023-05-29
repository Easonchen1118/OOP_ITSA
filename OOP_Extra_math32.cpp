#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3, input;
    cin >> input;
    int temp = input;
    num1 = temp / 100;
    temp -= (num1 * 100);
    num2 = temp / 10;
    temp -= (num2 * 10);
    num3 = temp;
    int check = 0;
    check += num1 * num1 * num1;
    check += num2 * num2 * num2;
    check += num3 * num3 * num3;
    if (input == check) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}
