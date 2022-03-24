#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    map<int,vector<pair<string,string> > > mp;
    for(int i=0; i<n; i++){
        int x; string s,t;
        cin >> x >> s >> t;
        mp[x].push_back(pair<string,string> (s,t));
    }
    map<int,vector<pair<string,string> > > :: iterator it;
    for(it=mp.begin(); it!=mp.end(); it++){
        for(int i=0; i<it->second.size(); i++){
            cout << it->second[i].first << " " << it->second[i].second << endl;
        }
    }

}