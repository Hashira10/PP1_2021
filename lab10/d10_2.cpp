#include <bits/stdc++.h>
using namespace std;
bool comporator(vector<int> v, vector<int> w){
    int sum_v=0, sum_w=0;
    for(int i=0; i<v.size(); i++) sum_v+=v[i];
    for(int i=0; i<w.size(); i++) sum_w+=w[i];

    if(sum_v!=sum_w) return sum_v < sum_w;
    if(v.size()!=w.size()) return v.size() < w.size();
    return v < w;
}
int main(){
    vector<vector<int> > v;
    int n,m,x; cin >> n;
    while(n--){
        cin >> m;
        vector <int> row;
        while(m--){
            cin >> x;
            row.push_back(x);

        }
        v.push_back(row);
    }
    sort(v.begin(),v.end(),comporator);
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}