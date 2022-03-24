#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    sort(arr, arr + n);
    int count = 0;
    int i=0;
    while(arr[i] <= m && i<n){
        count += 1;
        m -= arr[i];
        i++;
    }
    cout << count;
}