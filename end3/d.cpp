#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int cnt=0;
    for (int a=2 ; a <= n; a++){
        bool ok = true;
        for(int c=2 ; c*c <= a ; c++){
            if(a % c == 0){
                ok = false;
                break;
            }
        }
        if(ok) cnt++;
    }
    cout << cnt;