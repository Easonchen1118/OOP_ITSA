#include <iostream>
using namespace std;

int main(){
    int number;
    bool isPrime = true;
    cin >> number;
    for (int i=2; i< number; i++) {
        if (number % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
