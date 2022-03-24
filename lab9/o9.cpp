#include <iostream>
#include <map>
using namespace std;
int main(){
    int n; cin >> n;
    map<string, string> mp;
    for(int i=0; i<n; i++){
        string x, y;
        cin >> x >> y;
        mp[x]=y;
    }
    int m; cin >> m;
    string log,pas;
    while(m--){
        cin >> log >> pas;
    

        if(mp[log].empty()) cout << "login error" << endl;
        else if(mp[log]!=pas) cout << "password error" << endl;
        else cout << "correct password" << endl;
    }
}
