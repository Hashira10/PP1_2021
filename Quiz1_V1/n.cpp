#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=1; i<=n; i++){
        cin >> arr[i];
        if(arr[i]<=437){
            int k=i;
            cout << "Crash " << k;
            return 0;
        } 
    }
    cout << "No crash";
}