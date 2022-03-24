#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="qwertyuiopasdfghjklzxcvbnm";
    string ch; cin >> ch;
    int t=0;
    for(int i=0; i<s.size(); i++){
        if(ch=="m"){
            cout << "q";
            return 0;
        }
        else if(ch==s.substr(t,1)) cout << s.substr(t+1,1);
        t++;
    }
}