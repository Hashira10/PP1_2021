#include<bits/stdc++.h>
using namespace std;
struct x {
    long long o, y, z;
    
    x(long n, long m){
        o=n;
        y=m;
        z= 19*y + (o + 239)*(o + 366) / 2;
    }
};
int main(){
    long long n; cin >> n;
    vector<x> v;
    while(n--){
        long long u,w; cin >> u >> w;
        x *p = new x(u,w);
        v.push_back(*p);
    }
    for(int i=0; i<v.size(); i++){
        cout << v[i].z << endl;
    }
}