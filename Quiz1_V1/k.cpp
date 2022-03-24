#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int k=n/3;
    int c=k*2;
    cout<< (n-c)/2 << " " << c << " " << (n-c)/2;
}