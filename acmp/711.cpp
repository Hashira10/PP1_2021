#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<string,int> > v;
    int n, m; cin >> n >> m;
    int min=99999999;
    string mins="";
    for(int i=0; i<n; i++){
        string s; cin >> s;
        int ans=0;
        for(int j=0; j<m; j++){
            int x; cin >> x;
            ans+=x;
        }
        if(ans<min){
            min=ans;
            mins=s;
        }
       
    }
    cout << mins;
}
