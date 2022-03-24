#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string s="";
    while(n!=0){
        s+=n%2+'0';
        n/=2;
    }
    reverse(s.begin(),s.end());
    for(int i=0; i<s.size(); i++){
        cout << s[i];
    }
}