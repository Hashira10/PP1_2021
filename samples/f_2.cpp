#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n][n];
    for(int i=0; i < n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    bool ok=true;
    for(int i=0; i < n; i++){
        for(int j=0; j<n; j++){
            if(i!=j){
                if(arr[i][j]!=arr[j][i]) ok=false;
            }
        }
    }
    if(ok) cout << "YES";
    else cout << "NO";
}