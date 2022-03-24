#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string s="";
    string w;
    for(int i=0; i<n; i++){
        cin >> w;
        s+=w;
    }
    string t="", l="";
    int z; cin >> z;
    if(n!=s.size()){
        t=s.substr(0,n-s.size()+z);
        l=s.substr(n-s.size()+z, s.size()-z+1);
    }
    else{
        t=s.substr(0,n-z);
        l=s.substr(n-z,z);
    }
    
    long long m=stoi(t);
    long long k=stoi(l);
    long long h=m*k;
    cout << h;
}