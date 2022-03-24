#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    int cnt=1;
    int ans=0;
    if(s.size()==1){
        cout << s[0] << " " << 0;
        return 0;
    }
    for(int i=0; i<s.size(); i++){
        ans+=s[i]-'0';
    }
    long long int n;
    n=ans;
    
    if(ans<=9){
        cout << ans << " " << 1;
        return 0;
    }
    else{
        ans=0;
        while(n>9){
            while(n!=0){
                ans+=n%10;
                n/=10;
            }
            n=ans;
            ans=0;
            cnt++;
        }
    }
    cout << n << " " << cnt;

    
}