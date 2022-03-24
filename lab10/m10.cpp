#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector <int> v, w, z;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(int i = 0; i < m; ++i){
        int x;
        cin >> x;
        w.push_back(x);
    }
    vector <int> :: iterator it;  
    it = unique(v.begin(), v.end());
    v.resize(distance(v.begin(), it));
    it = unique(w.begin(), w.end());
    w.resize(distance(w.begin(), it));
    for(int i = 0; i < max(v.size(), w.size()); ++i){
        if(i < v.size())
        z.push_back(v[i]);
        if(i < w.size())
        z.push_back(w[i]);
    }
    it = unique(z.begin(), z.end());
    z.resize(distance(z.begin(), it));
    for(int i = 0; i < z.size(); ++i){
        cout << z[i] << " ";
    }
}