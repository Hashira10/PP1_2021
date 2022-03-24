#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    multimap<string, int> mp;
    for(int i=0; i<n; i++){
        string s; int n;
        cin >> s >> n;
        mp.insert(make_pair(s,n));
    }
    multimap<string, int> :: iterator it;
    for(it=mp.begin(); it!=mp.end(); it++){
        if(it->second == 1){
            cout << it->first << " " << it->second
        }
    }
}