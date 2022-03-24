#include <bits/stdc++.h>
using namespace std;
void x(int n, int m){
    if(n==0 || m==0) return;
    cout << n/m << " ";
    x(m,n%m);
}
int main(){
    int n,m; cin >> n >> m;
    x(n,m);
}