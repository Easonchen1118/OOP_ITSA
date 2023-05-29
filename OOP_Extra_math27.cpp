#include <iostream>
using namespace std;

int main(){
    int start, end;
    cin >> start >> end;
    int ans = 0;
    for (int i=start; i<= end; i++) {
        ans += i;
    }
    cout << ans << endl;
    return 0;
}
