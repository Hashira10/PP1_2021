#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
bool x(int n){
    if(n==0 || n==1) return false;
    else {
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0) return false;
        }
    }
    return true;
}
int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    int a; cin >> a;
    int cnt=0;
    for(int i=0; i<v.size(); i++){
        if(v[i]>=a && x(v[i])) cnt++;
    }
    cout << cnt;
        
}