#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin >> n;
    map<int, int> mp;
    int max = -999999;
    for(int i=0; i<n; i++){
        cin >> m;
        mp[m]++;

    }
    map <int, int> :: iterator it;
    for(it=mp.begin(); it!=mp.end(); it++){
        if(max < it -> first) max = it -> first;
        //mp.erase(max);
    }
    int max_m=-999999;
    for(it=mp.begin(); it!=mp.end(); it++){
        if(it -> first!=max){
            if(max_m < it -> first) max_m = it -> first;
        }
    }
    cout << max_m;
}