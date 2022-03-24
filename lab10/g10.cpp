#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    multimap<string, int> mp;
    int cnt=0;
    multimap<string, int> :: iterator it;
    while(n--){
        string s,t; int x,y;
        cin >> s >> x >> t >> y;
        string a = s+ " and " + t;
        for(it=mp.begin(); it!=mp.end(); it++){
            if(it->first==a && it->second == x+y) cnt++;
        }
        if(cnt==0) mp.insert(make_pair(a,x+y));
    }
    
    for(it=mp.begin(); it!=mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    
}