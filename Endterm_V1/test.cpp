#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    map<char, int> mp;
    for(char i='0'; i<='9'; i++) mp[i];
    for(int i=0; i<s.size(); i++){
        if(s[i]>='0' && s[i]<='9') mp[s[i]]++;
    }
    map<char,int> :: iterator it;
    for(it=mp.begin(); it!=mp.end(); it++){
        if(it->second==0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
   
    
        
}