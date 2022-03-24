#include <iostream>
#include <map>
using namespace std;
int main(){
    string s;
    
    while(cin >> s){
        map<char, int> mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        map<char, int> :: iterator it;
        bool ok=true;
        for(it=mp.begin(); it!=mp.end(); it++){
            if(it->second > 1){
                ok=false;
                break;
            }
        }
        if(ok) cout << s << endl;
    }
}