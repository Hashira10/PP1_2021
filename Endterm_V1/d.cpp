#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n;
    map<string, vector<string> > mp;
    map<string, vector<string> > :: iterator it;
    bool ok;
    string name="", t="";
    int cnt=0;
    while(n-- >= 0){
        string s; getline(cin,s);
        ok=true;
        for(int i=0; i<s.size(); i++){
            if(s[i]==' ' || i==s.size()-1){
                if(ok){
                    name=s.substr(0,i);
                    cnt=i+1; ok=false;
                }
                else{
                    t = (i != s.size() - 1 ? s.substr(cnt, i - cnt) : s.substr(cnt, i + 1 - cnt));
                    cnt = i + 1;
                    mp[name].push_back(t);
                }
            }
        }
    }
    for(it=mp.begin(); it!=mp.end(); it++){
        cout << it->first << ": ";
        for(int i=0; i<it->second.size()-1; i++) cout << it->second[i] << ", ";
        cout << it->second[it->second.size()-1] << endl;
    }

}