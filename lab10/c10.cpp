#include <bits/stdc++.h>
using namespace std;
bool is_Square(int n){
    for(int i = 4; i <= 9; i++){
        if(i * i == n) return true;
    }
    return false;
}

int main(){
    stack<char> st;
    string s, f, k, num; cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(st.empty()){
            st.push(s[i]);
            continue;
        }

        f = st.top();
        k = s[i];
        num = f + k;
        if(is_Square(stoi(num))) st.pop();
        else st.push(s[i]);
    }

    if(st.empty()) cout << "Stack is empty";
    else{
        while(!st.empty()){
            cout << st.top();
            st.pop();
        }
    }
}