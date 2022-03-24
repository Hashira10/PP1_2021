#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    char arr[n][n];
    string s;
    for(char i='A'; i<='Z'; i++) s+=i;
    for(int i=1; i<=n; i++){
        cout << s.substr(0,i) <<" " << endl;

    }
    
}