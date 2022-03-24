#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int, int> mp;
    int m; cin >> m;
    while(m--){
        int x; cin >> x;
        mp[x]++;
    }
    for(auto i : mp) cout << i.first << " - " << i.second << endl;
}