#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d; cin >> a >> b >> c >> d;
    string ans1="";
    string ans2="";
    while(a!=0){
        ans1+=a%2+'0';
        a/=2;
    }
    while(c!=0){
        ans2+=c%2+'0';
        c/=2;
    }
    if(ans1.size()>ans2.size()){
        while(ans2.size()!=ans1.size()){
            ans2+='0';
        }
    }
    if(ans1.size()<ans2.size()){
        while(ans2.size()!=ans1.size()){
            ans1+='0';
        }
    }

    reverse(ans1.begin(),ans1.end());
    reverse(ans2.begin(),ans2.end());\
    cout << ans1 << endl;
    cout << ans2 << endl;
    if(ans1[b]==ans2[d]) cout << "Money was found";
    else cout << "Where is the money Lebowski?";

}
