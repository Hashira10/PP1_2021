#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    bool ok=true;
    string t="";
    int cnt=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='.') cnt++;
        if(cnt>3 && (s[i]<'0' || s[i]>9) ) ok=false;
    }
    int k=0;
    int g=0;
    for(int i=0; i<=s.size(); i++){
        if(s[i]=='.' || i==s.size()){
            t=s.substr(k,i);
            g=stoi(t);
            if(g<0 || g>255) ok=false;
            k=i+1;
        }
        t="";
    }
    if(ok) cout << "1";
    else cout << "0";
    
}