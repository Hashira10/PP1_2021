#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int x, y; cin >> x >> y;
    vector<int> v;
    for(int i=0; i<n; i++){
        if(arr[i]%x==0 && arr[i]%y!=0) v.push_back(arr[i]);
    }
    if(v.empty()) cout << "-1";
    else{
        for(int i=0; i<v.size(); i++){
            cout << v[i] << " ";
        }
    }
}