#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    int prod=1, sum=0;
    for(int i=0; i<v.size(); i++){
        while(v[i]>0){
            sum+=v[i]%10;
            prod*=v[i]%10;
            v[i]/=10;
        }
        cout << sum << " " << prod << endl;
        sum=0, prod=1;
    }
}