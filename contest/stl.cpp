#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v;
    for (int i=0; i< n; i++){
        int x; cin >> x;
        v.push_back(x);
    }

    int m; cin >> m;
    vector<int> w;

    for (int i=0; i< m; i++){
        int y; cin >> y;
        w.push_back(y);
    }
    vector<int> l;
    for (int i=0; i< m+n; i++){
        w.push_back(x+y);
    }
    for(int i=0; i<v.size()+w.size(); i++){
        if(i<v.size()) l[i]=v[i];
        else if(i>=v.size()) l[i]=w[i];
        cout << n+m << " " << endl;
        cout << l[i] << " ";

        
    }
    

    
}