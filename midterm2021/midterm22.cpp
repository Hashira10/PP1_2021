#include <iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int i=s.size()-1; i>=0; i--){
        if(s[i]>='0' and s[i]<='9') cout << s[i];
    }
}
