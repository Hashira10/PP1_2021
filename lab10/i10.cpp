#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v, w;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
        w.push_back(x);
    }
    reverse(w.begin(), w.end());
    for(int i=0; i<v.size(); i++){
        if(v[i]!=w[i]) cout << "Instead of " << v[i] << " here was " << w[i] << endl;
        else cout << "OK" << endl;
    }
}