#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
bool x(int n, int m, int arr[], int i){
    if(i==n-1) return true;
    if((arr[i+1]-arr[i])<=m) return false;
    x(n,m,arr,++i);
}
int main(){
    int n, m; cin >> n >> m;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    cout << (x(n,m,arr,0) ? "no" : "cheater");
}