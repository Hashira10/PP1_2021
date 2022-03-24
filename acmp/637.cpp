#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int teams[n];
    for (int i = 0; i < n; ++i) cin >> teams[i];
    int k; cin >> k;
    int total = 0;
    for (int i = 0; i < n; ++i) total += min(k, teams[i]);
    cout << total;
}
