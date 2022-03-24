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
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v.size()-1; j++){
            if(v[j]>v[j+1]) {
                int tmp=v[j];
                v[j]=v[j+1];
                v[j+1]=tmp;
            }
        }
    }
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}