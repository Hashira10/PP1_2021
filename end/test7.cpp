#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int> > v;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        vector<int> row;
        for(int i=0; i<2; i++){
            int x; cin >> x;
            row.push_back(x);
        }
        v.push_back(row);
    }
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=v.size()-2;i>=0;i--){
        if(v[i][0]<v[v.size()-1][0] && v[i][1]<v[v.size()-1][1]) ans++;
    }
    cout << ans;
}