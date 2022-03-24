#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    string s;
    int k=v.size()/2;
    while(cin >> s){
        if(s=="rotate"){
            rotate(v.begin(),v.begin()+k,v.end());
            for(int i=0; i<v.size(); i++){
                cout << v[i] << " ";
            }
        }
        if(s=="fill"){
            int x; cin >> x;
            fill(v.begin(),v.begin()+k,x);
            for(int i=0; i<v.size(); i++){
                cout << v[i] << " ";
            }
        }
        if(s=="reverse"){
            reverse(v.begin(),v.end());
            for(int i=0; i<v.size(); i++){
                cout << v[i] << " ";
            }
        }
        if(s=="exit"){
            return 0;
        }
    }
}