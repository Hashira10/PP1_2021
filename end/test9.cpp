#include<bits/stdc++.h>
using namespace std;
bool comp(vector<int> v){
    for(int i=0; i<v.size()-1; i+2){
        for(int j=1; j<v.size(); j+2){
            return v[i]<v[j];
        }
    }
}
int main(){
    int n; cin >> n;
    vector<int> v;
    while(n--){
        int x; cin >> x;
        v.push_back(x);
    }
    int temp=0;
    sort(v.begin(), v.end(), comp);
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}

