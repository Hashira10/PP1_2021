#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++){
        if((s[i]-'A')+n > 25){
            s[i] = n+s[i]-26;
        }
        else{
            s[i] = s[i]+n;
        }
    }
    cout << s;
}