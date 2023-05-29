#include <iostream>
using namespace std;

int main(){
    int matrix[3][3]= {0};
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cin >> matrix[i][j];
        }
    }
    
    if (matrix[0][0] == 1 && matrix[0][1] == 1 && matrix[0][2] == 1) {
        cout << "True" << endl;
    }
    else if (matrix[1][0] == 1 && matrix[1][1] == 1 && matrix[1][2] == 1) {
        cout << "True" << endl;
    }
    else if (matrix[2][0] == 1 && matrix[2][1] == 1 && matrix[2][2] == 1) {
        cout << "True" << endl;
    }
    else if (matrix[0][0] == 1 && matrix[1][0] == 1 && matrix[2][0] == 1) {
        cout << "True" << endl;
    }
    else if (matrix[0][1] == 1 && matrix[1][1] == 1 && matrix[2][1] == 1) {
        cout << "True" << endl;
    }
    else if (matrix[0][2] == 1 && matrix[1][2] == 1 && matrix[2][2] == 1) {
        cout << "True" << endl;
    }
    else if (matrix[0][0] == 1 && matrix[1][1] == 1 && matrix[2][2] == 1) {
        cout << "True" << endl;
    }
    else if (matrix[0][2] == 1 && matrix[1][1] == 1 && matrix[2][0] == 1) {
        cout << "True" << endl;
    }
    
    else if (matrix[0][0] == 0 && matrix[0][1] == 0 && matrix[0][2] == 0) {
        cout << "True" << endl;
    }
    else if (matrix[1][0] == 0 && matrix[1][1] == 0 && matrix[1][2] == 0) {
        cout << "True" << endl;
    }
    else if (matrix[2][0] == 0 && matrix[2][1] == 0 && matrix[2][2] == 0) {
        cout << "True" << endl;
    }
    else if (matrix[0][0] == 0 && matrix[1][0] == 0 && matrix[2][0] == 0) {
        cout << "True" << endl;
    }
    else if (matrix[0][1] == 0 && matrix[1][1] == 0 && matrix[2][1] == 0) {
        cout << "True" << endl;
    }
    else if (matrix[0][2] == 0 && matrix[1][2] == 0 && matrix[2][2] == 0) {
        cout << "True" << endl;
    }
    else if (matrix[0][0] == 0 && matrix[1][1] == 0 && matrix[2][2] == 0) {
        cout << "True" << endl;
    }
    else if (matrix[0][2] == 0 && matrix[1][1] == 0 && matrix[2][0] == 0) {
        cout << "True" << endl;
    }
    
    else {
        cout << "False" << endl;
    }
    return 0;
}
