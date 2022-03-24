#include <iostream>
using namespace std;

long long gcd(long long n, long long m){
    if(n==0 || m==0) return m+n;
    if(n > m) gcd(n=n%m,m);
    else  gcd(n,m = m % n);
}


int main(){
    long long n, m; cin >> n >> m;
    cout << gcd(n, m);
    return 0;
}