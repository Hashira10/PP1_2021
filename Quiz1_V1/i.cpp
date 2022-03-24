#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    if(n<60) cout << "00:00:" << n;
    if(n>=60 && n<3600) {
        int k=n/60;
        int c=k*60;
        int l=n-c;
        cout << "00:" << c << ":" << l;
    }
    if(n>=3600){
        int  m=n/3600;
        int k=(n-m*3600);
        int l=k/60;
        int c=k-l*60;
        if(m<10

    }