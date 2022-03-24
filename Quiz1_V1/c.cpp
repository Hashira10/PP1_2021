#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n];
    int max=-99999999, min=99999999;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]>max) max=arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]<min) min=arr[i];
    }
    int m;
    m=max&min;
    cout << m;
}
