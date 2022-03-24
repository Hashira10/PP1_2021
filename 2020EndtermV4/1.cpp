#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    map<int,int> mp;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        mp[x]++;
    }
    map<int,int> :: iterator it;
    int max=-999999, max1=-999999;
    for(it=mp.begin(); it!=mp.end(); it++){
        if(it->first>max) max=it->first;
    }
    for(it=mp.begin(); it!=mp.end(); it++){
        if(it->first!=max){
            if(it->first>max1) max1=it->first;
        }
    }
    for(it=mp.begin(); it!=mp.end(); it++){
        if(it->first==max1) cout << it->second;
    }

}