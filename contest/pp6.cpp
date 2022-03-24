#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    map<string, int> mp;
    int cnt =0;
    for(int i=0; i<n; i++){
        string s; cin >> s;
        int x; cin >> x
        if(mp[s]!=s) mp[s]=x;
        else mp[s] +=x;
    }
    int max = -9999;
    map <int, int> :: iterator it;
    for(it=mp.begin(); it!=mp.end(); it++){
        
    for(auto i : mp){
        if(i.second > 2) cnt++;
    }
    cout << cnt;
}