#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v, w;
    for(int i=0; i<6; i++){
        int x; cin >> x;
        if(i<3) v.push_back(x);
        else w.push_back(x);
    }
    sort(v.begin(), v.end());
    sort(w.begin(), w.end());
    int sum=0;
    int arr[3];
    for(int i=0; i<v.size(); i++){
        sum+=v[i]*w[i];
    }
    cout << sum;
}