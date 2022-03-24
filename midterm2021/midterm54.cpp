#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int k){
    if(k == 0) return n;
    else return gcd(k, n % k);
}

int main(){
    int n; cin >> n; 
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max = -999999;
    int m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            m = gcd(arr[i], arr[j]);
            if(max < m) max = m;
        }
    }
    cout << max;
}