#include <iostream>
using namespace std;

int main(){
    int output[8] = {0};
    int input;
    bool isNegative = false;
    cin >> input;
    if (input < 0) {
        input = input * (-1);
        isNegative = true;
    }
    if (input >= 64) {
        output[1] = 1;
        input -= 64;
    }
    if (input >= 32) {
        output[2] = 1;
        input -= 32;
    }
    if (input >= 16) {
        output[3] = 1;
        input -= 16;
    }
    if (input >= 8) {
        output[4] = 1;
        input -= 8;
    }
    if (input >= 4) {
        output[5] = 1;
        input -= 4;
    }
    if (input >= 2) {
        output[6] = 1;
        input -= 2;
    }
    if (input >= 1) {
        output[7] = 1;
        input -= 1;
    }
    
    if (isNegative == true) {
        for (int i=0; i<8; i++) {
            if (output[i] == 1) {
                output[i] = 0;
            }
            else if (output[i] == 0) {
                output[i] = 1;
            }
        }
        output[7] += 1;
        for (int i=7; i>=0; i--) {
            if (output[i] >= 2) {
                if (i == 0) {
                    output[i] -= 2;
                }
                else {
                    output[i] -= 2;
                    output[i-1] += 1;
                }
            }
        }
    }
    for (int i=0; i<8; i++) {
        cout << output[i];
    }
    cout << "\n";
    return 0;
}
