#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c; cin >> a >> b >> c;
    int k = (2*a*c+2*b*c);
    if(k%16!=0) k=(k/16)+1;
    else k/=16;
    cout << k;
}