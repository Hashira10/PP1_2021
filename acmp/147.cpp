#include<iostream>
using namespace std;
int main() {
    string s; 
    int n;
    while(n--){
        cin >> s;
        if(s[0]>='0' && s[0]<='9'){
            cout << "NO";
            return 0;
        }
        for(int i=1; i<4; i++){
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){
                cout << "NO";
                return 0;
            }
        }
        for(int i=4; i<6; i++){
            if(s[i]>='0' && s[i]<='9'){
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
    
    
}