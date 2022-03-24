#include <bits/stdc++.h>
using namespace std;
bool comp(pair<string,double> &v1, pair<string,double> &v2 ){
    if(v1.second==v2.second) return v1.first>v2.first;
    return v1.second>v2.second;
}
int main(){
    int n; cin>>n;
    double sum=0;
    map <string, double> mp;
    vector <double> v(n);
    vector <string> w(n);
    for(int i=0;i<n;++i){
        cin>>w[i]>>v[i];
        sum+=v[i];
    }
    for(int i=0;i<n;++i){
        mp[w[i]]+=((v[i]/sum)*100);
    }
    vector <pair<string,double> > vec(mp.begin(), mp.end());
    sort(vec.begin(),vec.end(),comp);
    vector <pair<string,double> > :: iterator it;
    for(it=vec.begin();it!=vec.end();++it){
        cout << it->first << " " << it->second << "%" << endl;
    }
}