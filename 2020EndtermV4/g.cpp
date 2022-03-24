#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int b[n-2];
    int min=99999999;
    for(int i=0; i<n-2; i++){
        b[i]=arr[i]+arr[i+1]+arr[i+2];
    }
    for(int i=0; i<n-2; i++){
        if(b[i]<min) min=b[i];
    }
    cout << min;
}