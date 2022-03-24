#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<string> v;
    vector<int> w;
    for(int i=0; i<n; i++){
        string s; int x;
        cin >> s >> x;
        v.push_back(s);
        w.push_back(x);
    }
    sort(v.begin(), v.end());
    sort(w.begin(),w.end());
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " " << w[i] << endl;
    }
}
