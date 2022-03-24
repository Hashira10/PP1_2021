#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin >> n >> m;
    for(int i=0; i<999999; i++){
        if((i-n)%m==0){
            cout << i;
            return 0;
        }
    }
}