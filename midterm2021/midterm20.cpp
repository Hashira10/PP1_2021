#include <iostream>
using namespace std;
int main(){
    string s; cin >> s;
    int sum = 0;
    for(int i=1; i<s.size(); i++){
        sum+=s[i]-'0';
    }
    
    if((sum-(s[0]-'0'))%10==0 ) cout << "YES";
    else cout << "NO";
}