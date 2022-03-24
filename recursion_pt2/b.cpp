#include <bits/stdc++.h>
using namespace std;

void x(int arr[], int size, int i){
    if(i == size) return;
    if(arr[i] == 0) cout << arr[i]  << ' ';
    x(arr, size, ++i);
}

void y(int arr[], int size, int i){
    if(i == size){
        x(arr, size, 0);
        return;
    }
    if(arr[i] != 0) cout << arr[i] << ' ';
    y(arr, size, ++i); 
}

int main(){
    int n, arr[1000], sz = 0;
    while(cin >> n) arr[sz++] = n;
    y(arr, sz, 0);
}