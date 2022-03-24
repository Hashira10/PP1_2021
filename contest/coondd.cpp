#include <iostream>
using namespace std;
int main(){
    string s,t; 
    getline(cin,s);
    getline(cin,t);
    for(int i=0; i<s.size(); i++){
        string k = s.substr(i,t.size());
        if(k==t){ 
            int j=i;
            int m=i;
            while(j<m+t.size()){
                s[j]='*';
                j++;
            }
        }
        cout << s[i];
    }

}