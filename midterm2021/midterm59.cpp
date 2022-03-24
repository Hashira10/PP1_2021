#include <iostream>
#include <algorithm>
using namespace std; 
bool x(int arr[], int n){
    string t="", s="";
    for(int i=0; i<n; i++){
        t+=arr[i]+'0';
    }
    for(int i=0; i<n; i++){
        sort(arr, arr+n);
        s+=arr[i]+'0';
    }
    if(s==t) return true;
    else return false;
}
int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << (x(arr, n) ? "Sorted" : "Not sorted");
}