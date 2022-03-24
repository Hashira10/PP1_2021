#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    map<char,int> mp;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='D') mp[s[i]]++;
    }
    map<char,int> :: iterator it;
    for(it=mp.begin(); it!=mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
}