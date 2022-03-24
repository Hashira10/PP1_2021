#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    int m; cin >> m;
    vector<int> w;
    for(int i=0; i<m; i++){
        int y; cin >> y;
        w.push_back(y);
    }
    vector<int> r;
    for(int i=0; i<m+n; i++){
        r.push_back(v.size()+w.size());
    }
    for(int i=0; i<r.size(); i++){
        if(i<n) r[i] == v[i];
        if(i>=n && i<m+n) r[i] == w[i];
    }
    sort(v.end(), v.begin());
    for(int i=0; i<r.size(); i++){
        cout << r[i] << " ";
    }
    
}