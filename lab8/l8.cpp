#include <iostream>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int n; cin >> n;
    set<int> sss;
    for(int i=0; i<n; i++){
        int a; cin >> a;
        sss.insert(a);
    }
    cout << sss.size();
}
