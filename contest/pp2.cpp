#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int, int> mp;
    int m; cin >> m;
    int x;
    for(int i=1; i<=x; i++)
        cin >> x;
        if(x%i==0) mp[x]++;
    }
    for(auto i : mp) cout << i.first << " - " << i.second << endl;
}