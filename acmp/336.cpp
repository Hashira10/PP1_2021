#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    if(n%2==0  && n!=0 ) cout << n;
    if(n==0) cout << 1;
    if(n%2!=0) cout << n+1;
}