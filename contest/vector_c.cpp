#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<string> v
    unordered_map<string, int> mp;
    double sum=0;
    for(int i=0; i<n; i++){
        string s; double x;
        cin >> s >> x;
        mp[s]+=x;
        sum+=x;
    }

    unordered_map<string, int> :: iterator it;
    for(it=mp.begin(); it!=mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
}
