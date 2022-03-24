#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    int sumev=0, sumod=0;
    for(int i=0; i<s.size(); i++){
        if((s[i]-'0')%2==0) sumev+=s[i]-'0';
        else if((s[i]-'0')%2!=0) sumod+=s[i]-'0';
    }
    int sum=0;
    for(int i=0; i<s.size(); i++){
        sum+=s[i]-'0';
    }
    if(sumev>sumod) cout << sumev;
    else if(sumod>sumev) cout << sumod;
    else if(sumev==sumod) cout << sum;
}