#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    set<int> st;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        st.insert(x);
    }
    set<int> :: iterator it;
    for(it=st.begin(); it!=st.end(); it++){
        v.push_back(*it);
    }
    do{
        for(int i=0; i<v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }while(next_permutation(v.begin(), v.end()));
}