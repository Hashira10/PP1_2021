#include <bits/stdc++.h>
using namespace std;
int main(){
    map<char,int> mp;
    string s; getline(cin,s);
    for(char i ='a' ; i<='z'; i++) mp[i]=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z') s[i]+=32;
        int k=0;
        
        if(s[i]>='a' && s[i]<='z') mp[s[i]]++;
    }
    map<char,int> :: iterator it;
    for(it=mp.begin(); it!=mp.end(); it++){
        cout << it->first << ": " << it->second << endl;
    }
}