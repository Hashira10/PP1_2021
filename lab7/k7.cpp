#include <iostream>
using namespace std;
void x(string s, int i, int max){
    if(i==s.size()) {
        cout << max;
        return;
    }
    if((s[i]-'0') > max) max=s[i]-'0';
    x(s, ++i, max);
}
int main(){
    string s; cin >> s;
    x(s, 0, -99999999);
}