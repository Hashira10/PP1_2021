#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    map<string,set<int> > mp;
    for(int i=0; i<n; i++){
        string s; int x;
        cin >> s >> x;
        mp[s].insert(x);
    }
    map<string,set<int> > :: iterator it;
    for(it=mp.begin(); it!=mp.end(); it++){
        cout << it->first << " ";
        if(it->second.size()>=3) cout << "+1" << endl;
        else cout << "NO BONUS" << endl;
    }

}