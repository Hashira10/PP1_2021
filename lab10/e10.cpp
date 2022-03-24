#include <iostream>
#include <map>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    int n,x; cin >> n;
    map<string,double> mp;
    int sum=0;
    while(n--){
        cin >> x;
        while(x--){
            string s; double y;
            cin >> s >> y;
            mp[s]+=y;
            sum+=y;
        }
    }
    map<string, double> :: iterator it; 
    for(it=mp.begin(); it!=mp.end(); it++){ 
        cout << it->first << " " << it->second*100/sum << endl; 
    } 
}