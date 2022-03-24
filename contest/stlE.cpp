#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v;
    int n;
    while(cin >> n){
        v.push_back(n);
    }
    reverse(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        if(v[i]==0) return 0;
        cout << v[i] << " ";
    }
}