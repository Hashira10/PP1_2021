#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    string ans="";
    while(n){
        ans+=(n%2)+'0';
        n/=2;
    }
    while(ans.size()<8){
        ans+='0';
    }
    reverse(ans.begin(), ans.end());
    string t=ans;
    reverse(ans.begin(),ans.end());
    
    if(ans==t) cout << "It works!";
    else cout << "Sad";
}