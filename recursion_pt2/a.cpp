#include <bits/stdc++.h>
using namespace std;
void x(string s, int i){
    if(s[i]>='A' && s[i]<='Z'){
        cout << s[i] << " " << i;
        return;
    }
    if(i==s.size()){
        cout << "CHAOS!";
        return;
    }
    x(s,++i);
}
int main(){
    string s; cin >> s;
    x(s,0);

}