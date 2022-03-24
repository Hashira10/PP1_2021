#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v;
    set<int> st;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
        st.insert(x);
    }
    if(v.size()!=st.size()) cout << "NO";
    else cout << "YES";
}