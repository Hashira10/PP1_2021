#include<bits/stdc++.h>
using namespace std;
bool x(int i){
    if(i==2) return true;
    for(int j=2; j*j<=i; j++){
        if(i%j==0)return false;
    }
    return true;
}
int main(){
    int n; cin >> n;
    int k=2;
    vector<int> v,w;
    while(k<=100){
        if(x(k)) v.push_back(k);
        k++;
    }
    for(int i=0; i<v.size();i++){
        if(i%2!=0) w.push_back(v[i]); 
    }
    cout << w[n];
}