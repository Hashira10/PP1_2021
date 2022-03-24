#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int count = 0;
    int max_count = 0;
    for (int i = 0; i < n; ++i) {
        int temp; cin >> temp;
        if (temp > 0) {
            count += 1;
            max_count = max(max_count, count);
        } else {
            count = 0;
        }
    }
    cout << max_count;
}