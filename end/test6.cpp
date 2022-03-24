#include<bits/stdc++.h>
using namespace std;
bool comp(vector<int> &a, vector<int> &b){
    if (a[0] == b[0]) return a[1] > b[1];
    return a[0] < b[0];
}
int main(){
    vector<vector<int> > v;
    sort(v.begin(), v.end(), comp);
    int n; cin >> n;
    for(int i=0; i<n; i++){
        vector<int> row;
        for(int i=0; i<2; i++){
            int x; cin >> x;
            row.push_back(x);
        }
        v.push_back(row);
    }
    int i=0;
    int cnt=0;
    for(int j=0; j<v.size(); j++){
        if(v[i][1]<v[j][1]){
            cnt++;
            i++;
        }
        else i++;
    }
}