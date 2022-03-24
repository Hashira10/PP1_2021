#include <bits/stdc++.h>
using namespace std;
char ch(int n){
    if(n>=10) return 'A'+n-10;
    else return n+'0';
}
void x(int n, int m){
    if(n==0) return;
    x(n/m,m);
    cout << ch(n%m);
    
}
int main(){
    int n; cin>> n;
    int m; cin >> m;
    x(n,m);
}