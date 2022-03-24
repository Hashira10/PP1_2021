#include <iostream>
using namespace std;
int main() {
    int n, a, b; 
    cin >> n >> a >> b;
    for (; n > 1; --n) {
        int prev = b - a;
        b = a;
        a = prev;
    }
    cout << a << ' ' << b;
}