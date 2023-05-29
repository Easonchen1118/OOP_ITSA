#include <iostream>
#include <iomanip>
using namespace std;
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30747

int main(){
    int input;
    double output;
    cin >> input;
    output = input * (1.6);
    cout << fixed << setprecision(1) << output << "\n";
    return 0;
}
