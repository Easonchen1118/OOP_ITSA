#include <iostream>
using namespace std;

int main(){
    int input;
    cin >> input;
    int total = 0;
    for (int i=1; i<= input; i++) {
        if ((i%3) == 0) {
            total += i;
        }
    }
    cout << total << endl;
    return 0;
}
