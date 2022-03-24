#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int m; cin >> m;
    int l;
    for(int i=1; i<=n; i++){
        int k=i;
        while(k>0){
            l = k%10;
            k/=10;
        }
        if(l==m) cout << i << " ";
        else if(i%10==m) cout << i << " ";
    }
}