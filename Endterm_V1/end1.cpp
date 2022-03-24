#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin >> n >> k;
    vector<int> v,w;
    for(int i=1; i<=n; i++){
        v.push_back(i);
        w.push_back(i);
    }
    int cnt=0;
    int cnt2=0;
    do{
        for(int i=0; i<v.size(); i++){
            if(v[i]==w[i]) cnt++;
        }
        if(cnt==k){
            cnt2++;
            cnt=0;
        }
        else cnt=0;

    }while(next_permutation(v.begin(),v.end()));
    cout << cnt2;
}