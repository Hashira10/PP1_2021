#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    bool ok=true;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1]==4) ok=false;
            else if(arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1]==0) ok=false;
        }
    }
    if(ok) cout << "YES";
    else cout << "NO";
}