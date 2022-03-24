#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int> > v;
    set<int> st;
    int k=0;
    int max=0;
    for(int i=0; i<n; i++){
        vector<int> row;
        for(int j=0; j<m; j++){
            int x; cin >> x;
            if(x>=0) row.push_back(x);
        }
        v.push_back(row);
        st.insert(row.size());
        if(row.size()>max) max=row.size();

    }
    if(st.size()==1){
        cout << "Numbers are equal";
        return 0;
    }
    else{
        for(int i=0; i<v.size(); i++){
            if(v[i].size()==max) cout << i+1;
        }
    }
}