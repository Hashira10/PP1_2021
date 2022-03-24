#include <bits/stdc++.h>
using namespace std;
bool x(string s, int i){
    if(i==s.size()/2) return true;
    if(s[i]!=s[s.size()-1-i]) {
        return false;
    }
    return x(s,++i);
}
int main(){
    string n; cin >> n;
    cout << (x(n,0) ? "YES" : "NO");
}