#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int m; cin >> m;
    int min = 999999999;
    int k=0;
    for(int i=0; i<n; i++){
        if(abs(m-arr[i])<min) {
            min = abs(m-arr[i]);
            k=i;
        }
    }
    cout << k;

}