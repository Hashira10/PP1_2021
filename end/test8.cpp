#include<bits/stdc++.h>
using namespace std;
int x(int n, int cnt){
    if(n==1) return cnt;
    if(n%3==0) return x(n/=3, ++cnt);
    if(n%2==0) return x(n/=2, ++cnt);
    if(n%2!=0 && n%3!=0 && n!=1) return x(--n,++cnt);
}
int main(){
    int n; cin >> n;
    cout << x(n,0);
}