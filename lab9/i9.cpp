#include <iostream>
#include <map>
using namespace std;

int main(){
    int n; cin >> n;
    map<string,int> m;
    string s;
    for(int i=0; i<n; i++){
        cin >> s;
        if(!m[s]) cout << "new user added" << endl;
        else cout << "user already exists" << endl;
        m[s]++;
    }
    
}