#include <iostream>
using namespace std;
int main(){
    int n;
    int m; 
    cin >> n >> m;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n-1; i++){
        if(arr[i]<=arr[i+1]) m--;
        else if(arr[i]>arr[i+1]) m*=2;
        
    }
    cout << m;
}