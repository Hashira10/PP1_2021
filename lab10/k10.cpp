#include <bits/stdc++.h>
using namespace std;
bool xy(int n){
    if(n<0) n*=-1;
    if(n==1 || n==0) return false;
    if(n==2) return true;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        if(x<0) x*=-1;
        v.push_back(x);
    }
    int cnt = count_if(v.begin(),v.end(),xy);
    cout << cnt;
}