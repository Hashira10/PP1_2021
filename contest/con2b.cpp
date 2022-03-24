#include <iostream>
using namespace std;
int main(){
    char n;
    cin >> n;
    string s; 
    cin >> s;

    for(int i=0; i<s.size(); i++) 
      if(s[i] != n) 
      cout << s[i];
}