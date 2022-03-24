#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a, n; cin >> a >>  n;
    int b, k; cin >> b >> k;
    string ans = "", ab = "";
    while(a){
        ans += (a%2)+'0';
        a/=2;
    }
    while(ans.size()!=8){
        ans = ans+'0';
    }
    reverse(ans.begin(), ans.end());
    while(b){
        ab += (b%2)+'0';
        b/=2;
    }
    while(ab.size()!=8){
        ab = ab+'0';
    }
    reverse(ab.begin(), ab.end());
    
    if(ans[7-n]==ab[7-k]) cout << "Thunderclap and Flash!";
    else cout << "Thunder Breathing... First form...";
}