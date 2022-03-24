#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    int h,m;
    scanf("%d:%d",&a, &b);
    cin >> h >> m;
    a+=h;
    b+=m;
    a+=b/60;
    b%=60;
    a%=24;
    if(a<10) cout << 0;
    cout << a << ":";
    if(b<10) cout << 0;
    cout << b;

}