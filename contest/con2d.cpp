#include <iostream>
using namespace std;
int main(){
    string s; cin >> s;
    int n=0;
    for(int i=0; i<s.size(); i++){
        string t = s.substr(n,i+1);
        cout << t << endl;
    }
}