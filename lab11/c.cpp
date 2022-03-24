#include <bits/stdc++.h>  
using namespace std; 
double sum = 0;
map<string, double> mp;
bool comp(pair<string, double> &a, pair<string, double> &b){
    return a.second > b.second;
}
int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        string s; double x;
        cin >> s >> x;
        sum += x;
        mp[s] += x;
    }
    for(auto &i : mp){
        i.second = double((i.second*100) / sum);
    }
    vector<pair<string, double>> vp;
    for(auto i : mp) vp.push_back(i);
    sort(vp.begin(), vp.end(), comp);
    for(auto i : vp) cout << i.first << " " << i.second << "%" << endl;
}
