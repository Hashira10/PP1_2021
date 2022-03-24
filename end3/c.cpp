#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,string> mp;
    vector<string> v;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        string s; int n;
        cin >> s >> n;
        while(n--){
            string t; cin >> t;
            mp[t]=s;
        }
    }
    int m; cin >> m;
    for(int i=0; i<m; i++){
        string h; cin >> h;
        v.push_back(h);
    }
    for(int i=0; i<v.size(); i++){
        if(mp[v[i]].size()==0) cout << "Unknown" << endl;
        else cout << mp[v[i]] << endl;
    }
}