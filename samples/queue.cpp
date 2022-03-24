#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s; cin >> s;
    stack<char> st;
    queue<char> q;
    for(int i=0; i<s.size(); i++){
        st.push(s[i]);
        q.push(s[i]);
    }
    while(!(st.empty() && q.empty())){
        if(st.top()!=q.front()){
            cout << "NO";
            return 0;
        }
        st.pop();
        q.pop();
    }
    cout << "YES";
}