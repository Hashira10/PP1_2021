#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int h=0; h<n; h++){
                if(v[h]==(v[i]^v[j])) {
                    cnt++;
                    break;
                }
            }
        }
    }
    cout << cnt;
}