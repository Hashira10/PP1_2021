#include <bits/stdc++.h>
using namespace std;

long long int Rec(long long int n, long long int ans){
    if(n == 0) return ans;
    return Rec(--n, ans + n);
}

int main(){
    long long int n; cin >> n;
    cout << Rec(n, 0);
}
