#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    bool isFirst = true;
    for (int i=1; i<=num; i++) {
        if ((i % 35) == 0 && isFirst == true) {
            cout << i;
            isFirst = false;
        }
        else if ((i % 35) == 0) {
            cout << " " << i;
        }
    }
    cout << endl;
    return 0;
}
