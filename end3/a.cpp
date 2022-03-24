#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string s="";
    string t="";
    for(int i=1; i<=n; i++) s+=(i+'0');
    for(int j=n; j>=1; j--) t+=(j+'0');
    int m=n;
    int k=n;
    int g=0;
    int u=0;
    string h="";
    for(int i=0; i<n; i++){
        for(int j=0; j<n+n; j++){
            cout << t.substr(0,m);
            if(j==m && j!=n){
                while(h.size()!=u){
                    h+=" ";
                }
                cout << h;
            }
            cout << s.substr(g,m);
            
        }
        m--;
        g++;
        k++;
        u+=2;
        cout << endl;
    }
    
}