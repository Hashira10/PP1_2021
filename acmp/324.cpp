#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    bool ok=true;
    if(s[0]!=s[3] || s[1]!=s[2]) ok=false;
    if(ok) cout << "YES";
    else cout << "NO";
}