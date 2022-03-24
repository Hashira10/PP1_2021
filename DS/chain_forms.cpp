#include<bits/stdc++.h>
using namespace std;
void x(int n, int m){
    if(n==0 || m==0) cout << n+m;
    if(n>m){
        x(n%m,m);
    }
    else x(n,m%n);
}
int main(){
    int n,m; cin >> n >> m;
    x(n,m);
}