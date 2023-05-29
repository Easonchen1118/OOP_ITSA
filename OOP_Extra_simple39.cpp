#include <iostream>
using namespace std;

int main(){
    int students;
    cin >> students;
    int score[3] = {0};
    for (int i=0; i<students; i++) {
        cin >> score[0] >> score[1] >> score[2];
        int total = score[0] + score[1] + score[2];
        if (score[0] >= 60 && score[1] >= 60 && score[2] >= 60) {
            cout << "P" << endl;
        }
        else if (score[0] < 60 && score[1] >= 60 && score[2] >= 60 && total >= 220) {
            cout << "P" << endl;
        }
        else if (score[0] >= 60 && score[1] < 60 && score[2] >= 60 && total >= 220) {
            cout << "P" << endl;
        }
        else if (score[0] >= 60 && score[1] >= 60 && score[2] < 60 && total >= 220) {
            cout << "P" << endl;
        }
        else if (score[0] < 60 && score[1] >= 60 && score[2] >= 60 && total < 220) {
            cout << "M" << endl;
        }
        else if (score[0] >= 60 && score[1] < 60 && score[2] >= 60 && total < 220) {
            cout << "M" << endl;
        }
        else if (score[0] >= 60 && score[1] >= 60 && score[2] < 60 && total < 220) {
            cout << "M" << endl;
        }
        else if (score[0] >= 80 && score[1] < 60 && score[2] < 60) {
            cout << "M" << endl;
        }
        else if (score[1] >= 80 && score[0] < 60 && score[2] < 60) {
            cout << "M" << endl;
        }
        else if (score[2] >= 80 && score[0] < 60 && score[1] < 60) {
            cout << "M" << endl;
        }
        else {
            cout << "F" << endl;
        }
    }
    return 0;
}
