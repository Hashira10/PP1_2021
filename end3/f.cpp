#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; int x1,x2; cin >> s >> x1 >> x2;
    string t; int y1, y2; cin >> t >> y1 >> y2;
    int n; cin >> n;
    int cnt=0;
    int cnt2=0;
    string f;
    while(n--){
        cin >> f;
        while(x1>0 && y1>0){
            if(f==t){
                x1-=y2;
                cnt++;
            }
            else if(f==s){
                y1-=x2;
                cnt2++;
            }
        }
    }
    
    if(x1<=0) cout << t <<  " won after " << cnt << " hits!";
    else if(y1<=0) cout << s << " won after " << cnt2 << " hits!";
    else if(x1>0 && y1>0) cout << "Draw!";
}