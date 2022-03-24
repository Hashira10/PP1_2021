#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    int mx=-9999999;
    int mn = 99999999;
    for(int i=0; i<v.size(); i++){
        if(v[i]>mx) mx=v[i];
    }
    for(int i=0; i<v.size(); i++){
        if(v[i]<mn) mn=v[i];
    }
    cout << mx-mn;
}