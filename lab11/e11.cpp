#include<bits/stdc++.h>
using namespace std;
int main(){
    bool ok=false;
    map<char,int> mp;
    set<char> st;
    set<char> :: iterator it;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        string s; cin >> s;
        for(int j=0; j<s.size(); j++) st.insert(s[j]);
        for(it=st.begin(); it!=st.end(); it++) mp[*it]++;
        st.clear();
    }
    map<char,int> :: iterator it1;
    for(it1=mp.begin(); it1!=mp.end(); it1++){
        if(it1->second >= n) {
            cout << it1->first << " ";
            ok=true;
        }
    }
    if(ok){}
    else cout << "NO COMMON CHARACTERS";
}