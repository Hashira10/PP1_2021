#include <iostream>
#include <map>
using namespace std;

int main(){
    int n; cin >> n;
    map<int,int> m;
    while(n--){
        int x; cin >> x;
        m[x]++;
    }
    int cnt=0;
    for(auto i : m) {
        if(i.second>1) {
            cnt++;
        }
    }
    
    cout << cnt;
    
}