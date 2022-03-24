#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    int sum=0;
    int max=-9999999;
    for(int j=0; j<v.size(); j++){
        for(int i=0; i<v.size()-1; i++){
            if(v[i]>v[i+1]) swap(v[i],v[i+1]);
        }
    }
    if(v.size()<2){
        cout << 0;
        return 0;
    }
    for(int i=0; i<v.size()-1; i++){
        sum=v[i+1]-v[i];
        if(sum>max) max=sum;
        sum=0;
    }
    cout << max;
}