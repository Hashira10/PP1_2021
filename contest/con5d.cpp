#include <iostream>
#include <string.h>
using namespace std;
string x(string s){
    int max=0, cnt=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]!=' ') cnt++;
        else if(s[i]==' ') cnt=0;
        return 0;
    }
    for(int i=0; i<s.size(); i++){
        if (cnt>max) 
        cout << s[i];
    }
    
}
int main(){
    string s;
    getline(cin,s);
    x(s);
}


