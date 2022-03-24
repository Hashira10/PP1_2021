#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    bool ok=false;
    string s="",t="";
    for(int i=n-1; i>=n/2; i--){
        ok=false;
        for(int j=arr[i].size()-1; j>=0; j--){
            if(arr[i][j]=='0'){
                if(ok) s+=arr[i][j];
            }
            else{
                s+=arr[i][j];
                ok=true;
            }
        }
    }
    for(int i=0; i<n/2; i++) t+=arr[i];
    if(s==t) cout << "YES";
    else cout << "NO";
}
