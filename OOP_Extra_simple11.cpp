#include <iostream>
using namespace std;

int main(){
    int row, col;
    cin >> row >> col;
    int matrix[row][col];
    int ans[col][row];
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            cin >> matrix[i][j];
            ans[j][i] = matrix[i][j];
        }
    }
    for (int i=0; i<col; i++) {
        for (int j=0; j<row; j++) {
            cout << ans[i][j];
            if (j != row -1){
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
