#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    if(n%2==0) cout << n/2;
    if(n%2!=0 && n!=1) cout << n;
    else if(n==1) cout << 0;
}