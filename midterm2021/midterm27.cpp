#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int k; cin >> k;
    if(k>0){
        for(int i=n-k; i<n; i++) cout << arr[i] << " ";
        for(int i=0; i<n-k; i++) cout << arr[i] << " ";
    }
    if(k<0){
        k*=-1;
        for(int i=k; i<n; i++) cout << arr[i] << " ";
        for(int i=0; i<k; i++) cout << arr[i] << " ";
    }
    if(k==0){
        for(int i=0; i<n; i++) cout << arr[i] << " ";
    }
}