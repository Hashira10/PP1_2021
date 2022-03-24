#include<bits/stdc++.h>
using namespace std;
bool comp(vector<int> a, vector<int> b){
    int sum_a=0, sum_b=0;
    for(int i=0; i<a.size(); i++) sum_a+=a[i];
    for(int i=0; i<b.size(); i++) sum_b+=b[i];
    if(sum_a!=sum_b) return a<b;
}
int main(){
    int n; cin >> n;
    vector<vector<int> > v;
    for(int i=0; i<n; i++){
        vector<int> w;
        for(int j=0; j<n; j++){
            int m; cin >> m;
            w.push_back(m);
        }
        v.push_back(w);
    }
    sort(v.begin(),v.end(),comp);
    for(int i=0; i<n; i++){
        for(int j=0; j<v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}