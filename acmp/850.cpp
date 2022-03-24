#include <iostream>
using namespace std;
bool y(int x) {
    return x/100000%10 + x/10000%10 + x/1000%10 == x/100%10 + x/10%10 + x/1%10;
}

int main() {
    int k; cin >> k;
    for (int i = 0; i < k; ++i) {
        int t; cin >> t;
        cout << (y(t - 1) || y(t + 1) ? "Yes" : "No") << ' ';
    }
}