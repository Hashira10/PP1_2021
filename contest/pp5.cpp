#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    map<int, int> mp;
    int cnt =0;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        mp[x]++;
    }
    for(auto i : mp){
        if(i.second > 2) cnt++;
    }
    cout << cnt;
}