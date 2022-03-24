#include<bits/stdc++.h>
using namespace std;
int main(){
    long long gx, gy, dx, dy, n;
    cin >> gx >> gy >> dx >> dy >> n;
    for (int i = 1; i <= n; ++i) {
        long long x, y; cin >> x >> y;
        long long gd = pow(gx - x, 2) + pow(gy - y, 2);
        long long dd = pow(dx - x, 2) + pow(dy - y, 2);
        if (dd >= 4 * gd) {
            cout << i;
            return 0;
        }
    }
    cout << "NO";
}