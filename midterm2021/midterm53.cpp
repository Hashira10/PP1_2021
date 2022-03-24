#include <iostream>
using namespace std;
int main(){
    string s,t; 
    getline(cin,s);
    getline(cin,t);
    char ch; cin >> ch;
    for (int i=0; i<s.size(); i++){
        for(int j=0; j<t.size(); j++){
            if(s[i]==t[j]) s[i]=ch;
            else s[i]=s[i];
        }
        
    }
    cout << s;
}