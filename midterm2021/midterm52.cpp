#include <iostream>
using namespace std;
bool x(string s, int cnt1, int cnt2){
    for(int i=0; i<s.size(); i++){
        cnt1=0;
        for(int j=0; j<s.size(); j++){
            if(s[i]==s[j]) cnt1++;
        }
        if(cnt1==1) cnt2++;
        if(cnt1%2!=0 && cnt2>1) return false;
    }
    return true;
}
int main(){
    string s; cin >> s;
    cout << (x(s,0,0) ? "Luffy is the pirate king!" : "Onepiece");
}