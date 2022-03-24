#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;
    int cnt1=0, cnt2=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='(') cnt1++;
        else cnt2++;
    }

    if(cnt1==cnt2 && s[s.size()-1]!='(' && s[0]!=')') cout << "YES";
    else cout << "NO";
    
}