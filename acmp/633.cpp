#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> v,w;
    string s;
    getline(cin,s);
    for(int i=0; i<3; i++){
        string t; cin >> t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    cout << s << ": ";
    for(int i=0; i<v.size()-1; i++){
        cout << v[i] << ", ";
    }
    cout << v[v.size()-1];
}