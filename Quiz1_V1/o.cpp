#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    bool ok=true;
    for(int i=0; i<s.size()/2; i++){
        if(s[i]!=s[s.size()-i-1]){
            ok=false;
            break;
            
        }
    }
    if(ok) cout << "YES";
    else cout << "NO";
}