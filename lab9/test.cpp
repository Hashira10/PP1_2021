#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<string> > v;
    int n; cin >> n;
    int curr=0;
    for(int i=0; i<n; i++){
        string s;
        vector<char> row;
        getline(cin,s);
        for(int i=0; i<=s.size(); i++){
            row.push_back(s.substr(curr,i-curr));
            curr=i+1;
        }
        v.push_back(row)
    }
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            if(v[i][j].size()==2) cout << "H" << " ";
            else cout << "S" << " ";
        }
        cout << endl;
    }
}