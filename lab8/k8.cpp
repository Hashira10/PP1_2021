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
    int k; cin >> k;
    sort(v.begin(), v.end());
    int sum=0;
    reverse(v.begin(),v.end());
    for(int i=0; i<k; i++){
        sum+=v[i];
    }
    cout << sum;
    
}