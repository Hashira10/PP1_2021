#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v;
    int max=-99999999;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
        if(x>max) max=x;
    }
    int cnt=0;
    for(int i=0; i<v.size(); i++){
        if(v[i]==max) cnt++;
    }
    cout << cnt;
}