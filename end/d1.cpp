#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    map<char, int> mp;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='0' && s[i]<='9'){
            if(!mp[s[i]]){
                cout << s[i];
            }
            mp[s[i]]++;
        } 
        else cout << s[i];
    }
}