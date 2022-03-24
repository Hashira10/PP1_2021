#include <iostream>
using namespace std;
int x(string s, int i){
    if(i==s.size()-1) return s[i]-'0';
    return x(s,i+1)+(s[i]-'0');
}
int main(){
    string s; cin >> s;
    cout << x(s, 0);
}