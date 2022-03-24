#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int arr [n];
    int min=9999999;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]<min) min=arr[i];
    }
    int m; cin >> m;
    int brr [m];
    for(int i=0; i<m; i++){
        cin >> brr[i];
        if(brr[i]%min==0) cout << brr[i] << " ";
    }
}