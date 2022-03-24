#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin >> n >> m;
    int arr[n][m];
    bool ok=true;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    for(int j=0; j<m/2; j++){
        if(arr[0][j]!=arr[0][m-j-1] || arr[n-1][j]!=arr[n-1][m-j-1]) {
            ok=false;
            break;
        }
    }
    if(ok) cout << "YES";
    else cout << "NO";
}