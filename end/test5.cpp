#include<bits/stdc++.h>
using namespace std;
int main() {
    string s; cin >> s;
    if(s==""){
        cout << "0";
        return 0;
    }
    int mx = 0;
    unordered_map<char,int> mp;
    int j=0;
    for (int i=0; i < s.size(); ++i) {
        if (mp.count(s[i])) {
            j = max(j, mp[s[i]] + 1);
        }
        mp[s[i]] = i;
        mx = max(mx, i - j + 1);
    }
    cout << mx;
}
abcabcbb
3
01234567
j=3; j=5;
0 1
mx=0;

