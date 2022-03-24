#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int, int> mp;
    map<int, vector<int>, greater<int> > mp2;
    int n;
    while(cin >> n) mp[n]++;
    map<int, int> :: iterator it;
    map<int, vector<int> > :: iterator it1;
    for(it=mp.begin(); it!=mp.end(); it++){
        mp2[it->second].push_back(it->first);
    }
    for(it1=mp2.begin(); it1!=mp2.end(); it1++){
        for(int i=0; i<it1->second.size(); i++){
            cout << it1->second[i] << " : " << it1->first << endl;

        }
    }

}