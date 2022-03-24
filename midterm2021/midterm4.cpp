#include <iostream>
using namespace std;
bool x(int l){
    if(l == 1) return true;
    if(l%2 == 1 && l!=1) return false;
    return x(l/2);
}
int main(){
    int n; cin >> n;
    int arr[n];
    int k=0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        k ^= arr[i];
    }
    cout << (x(k) ? "YES" : "NO");
}