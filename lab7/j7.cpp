#include <iostream>
using namespace std;
int x(string s, int i, int sum=0){
    if(i==s.size()) return sum;
    return x(s,++i,sum+= (s[i]-'0')/2);
}
int main(){
    string s; cin >> s;
    cout << x(s,0);
}