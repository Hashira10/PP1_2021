#include <iostream>
#include <map>
using namespace std;
int main(){
    int n, x; cin >> n;
    map<string, int> mp;
    string s;
    for(int i=0; i<n; i++){
        cin >> s;
        cin >> x;
        mp[s]+=x;
    }
    for(auto i : mp){
        cout << i.first << " " << i.second << endl;
    }
}