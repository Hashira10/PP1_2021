#include <iostream>
using namespace std;
int cnt = 0;
void x(string s, int i){
    if(i == s.size()) {
        cout << cnt;
        return;
    }
    if((s[i]-'0')%2==0) cnt++;
    x(s,++i);
}
int main(){
    string s;
    cin >> s;
    x(s,0);
}
