#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; getline(cin,s);
    int n; cin >> n;
    vector<char> v;
    for(int i=0; i<s.size(); i++){
        
        v.push_back(s[i]);
    }
    
    v.erase(v.begin(),v.begin()+n);
    for(int i=0; i<v.size(); i++){
        cout << v[i];
    }
}