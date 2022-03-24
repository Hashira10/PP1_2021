#include <bits/stdc++.h>
using namespace std;
int y(int arr[], int x, int n){
    int m = 0, ans = 0, cnt = x;
    bool ok = false;
    if(arr[0] != 1){
        m = arr[0]-1;
        if (m >= cnt) return cnt;
        cnt -= m;
    }
    for(int i = 0 ; i < n - 1; i++){  
        m = 0;
        if((arr[i] + 1) != arr[i + 1]){
            m += (arr[i + 1] - arr[i]) - 1;
            if(m >= cnt){
                ans = arr[i] + cnt;
                ok = true;
                break;
            }
            else cnt -= m;
        }
    }
    if(ok) return ans;
    else return  -1;
}
int main(){
    int arr[51];
    int n, i=0;
    while(cin >> n) arr[i++] = n;
    int x; x = arr[--i];
    cout << y(arr, x, i);
}