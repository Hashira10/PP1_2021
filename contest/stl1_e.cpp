#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v,y;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
        y.push_back(x);
    }
    int m; cin >> m;
    vector<int> w;
    for(int i=0; i<m; i++){
        int z; cin >> z;
        w.push_back(z);
        y.push_back(z);
    }
    sort(y.begin(), y.end());
    cout << n+m << endl;
    for(int i=0; i<y.size(); i++){
        cout << y[i] << " ";
    }
}