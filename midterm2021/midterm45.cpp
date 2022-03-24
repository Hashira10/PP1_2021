#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s; cin >> s;
    string t; cin >> t;
    if(s.size()!=t.size()) cout << "Not anagram";
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s==t) cout << "Anagram";
    else cout << "Not anagram";
}