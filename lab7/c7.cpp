#include <iostream>
using namespace std;
bool w(int n, int arr[], int m, int i){
    if(i==n) return false;
    if(m == arr[i]) return true;
    w(n, arr, m, ++i);
}
int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    int m; cin >> m;
    cout << (w(n,arr,m,0) ? "Yes" : "No");
}