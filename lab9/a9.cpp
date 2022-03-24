#include <iostream>
#include <set>
using namespace std;
int main(){
    int n; cin >> n;
    multiset< pair < int, int > > mp;
    for(int i=0; i<n; i++){
        int a,b; cin >> a >> b;
        mp.insert(make_pair(a,b));
    }
    multiset< pair < int, int > > :: iterator  it;
    for(it=mp.begin(); it!=mp.end();it++){
        cout << it->first << " " << it->second << endl;
    }

}