#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    string n = s;
    reverse(s.begin(), s.end());
    if(n==s) cout << "YES";
    else cout << "NO";
}