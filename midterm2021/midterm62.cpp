#include <iostream>
using namespace std;
int main(){
    string s; cin >> s;
    int n=0;
    for(int i=0; i<7; i++){
        n*=26;
        for(char j='A'; j<=s[i];j++){
            n++;
        }
        if(i==s.size()-1){
            cout << n;
            return 0;
        }

    }
    
}