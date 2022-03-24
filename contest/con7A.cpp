#include <iostream>
using namespace std;
int main(){
    string s; getline(cin,s);
    int c=0;
    int n; cin >> n;
    for(int i=0; i<s.size(); i++){
        if(s[i]==' ') c++;
        if(c==n-1 && s[i]!=' ') cout << s[i];
    }
    
    
    
}