#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    for(int i=0; i<v.size()-1; i++){
        if(v[i] < v[i+1]) cout << v[i+1] << " ";
    }
}