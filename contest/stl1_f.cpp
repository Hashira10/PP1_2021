#include <bits/stdc++.h>
using namespace std;
int main(){
    double n; cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        double s; cin >> s;
        v.push_back(s);
    }
    double sum=0;
    
    for(int i=0; i<v.size(); i++){
        sum+=v[i];
    }
    cout << sum/n;
}