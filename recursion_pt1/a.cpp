#include <bits/stdc++.h>
using namespace std;
int x(vector<int> v,int i, int cnt, int max){
    if(i==v.size()) return cnt;
    if(v[i]==max){
        return x(v,++i,++cnt,max);
    }
    return x(v,++i,cnt,max);
}
int main(){
    int n;
    vector<int> v;
    int max=-9999999;
    while(n!=0){
        cin >> n;
        v.push_back(n);
        if(n==0) break;
        if(n>max) max=n;
    }
    cout << x(v,0,0,max);
}