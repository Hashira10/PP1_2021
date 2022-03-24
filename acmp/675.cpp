#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    int mn = m;
    for (int i = 0; i < n; i++){
        int cnt = 0;
        char ch;
        for (int j = 0; j < m; j++){
            cin >> ch;
            if(ch=='.') cnt++;
        }
        mn = min(mn, cnt);
    }
    cout << mn;
}