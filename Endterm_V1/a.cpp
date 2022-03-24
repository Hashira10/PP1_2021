#include <iostream>
#include <map>
using namespace std;

int main(){

    int n; cin >> n;
    map<pair<int, int>, int> mp;
    map<pair<int, int>, int> :: iterator it;
    
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        int cnt = 0;
        for(it = mp.begin(); it != mp.end(); it++){
            if(it->first.first == max(x, y) and it->first.second == min(x, y)){
                cnt = it->second;
                break;
            }
        }
        cout << cnt << endl;
        mp[make_pair(max(x, y), min(x, y))]++;
    }
}