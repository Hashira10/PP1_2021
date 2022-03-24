#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,r; cin >> x >> y >> r;
    int x1,y1,r1; cin >> x1 >> y1 >> r1;
    int R = sqrt( (x1-x)*(x1-x) + (y1-y)*(y1-y) );
    if(r+r1>=R and R+r1>=r and r+R>=r1){
        cout << "YES";
    }
    else cout << "NO";
}