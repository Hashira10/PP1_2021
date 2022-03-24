#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string, int> mp;
    vector<string> v;
    string s;
    string t="";
    while(cin >> s){
        for(int i=0; i<=s.size(); i++){
            if(s[i]>='A' && s[i]<='Z') s[i]=s[i]+32;
            if(s[i]>='a' && s[i]<='z'){
                t+=s[i];
            }
        }
        mp[t]++;
        t="";
    }
    map<string,int> :: iterator it;
    for(it=mp.begin(); it!=mp.end(); it++){
        if(it->second >= 2) cout << it->first << endl;
    }

}