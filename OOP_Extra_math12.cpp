#include <iostream>
using namespace std;

int main(){
    double oneSec = (100 - 30 * 2.54);
    int dist, ans;
    cin >> dist;
    dist *= 100;
    ans = dist / oneSec;
    ans += 1;
    cout << ans << endl;
}
