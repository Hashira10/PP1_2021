#include <bits/stdc++.h>
using namespace std;

bool x(string s, int i){
    if(i > s.size()/2) return true;
    if(s[i] != s[s.size()-1-i]) return false;
    return x(s, i+1);
}

int main(){
    string s;
    cin >> s;
    cout << (x(s,0) ? "YES" : "NO");
}