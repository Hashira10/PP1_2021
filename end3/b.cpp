#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    string t; cin >> t;
    int cnt=0;
    for(int i=0; i<s.size(); i++){
        for(int j=0; j<=t.size(); j++){
            if(t[j]==s[0]){
                cout << j;
                return 0;
            }
            if(j==t.size()){
                cout << "Shit happens";
                return 0;
            }
        }
    }
}
    