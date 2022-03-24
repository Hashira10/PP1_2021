#include <bits/stdc++.h>
using namespace std;
int xxx(int x, int y, int z, int w, int cnt, int i, int j, int n){
    if(i>x && j>y && n>100) return cnt;
    if(x+y+z == w || x==w || y==w || z==w || x+y==w || x+z==w || y+z==w) cnt++;
    xxx(x*=i,y*=j,z*=n,w,cnt,i++,j++,n++);
}
int main(){
    int x, y, z, w;
    cin >> x >> y >> z >> w;
    cout << xxx(x,y,z,w,0,1,1,1);
    
}