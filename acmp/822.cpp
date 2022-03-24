#include<bits/stdc++.h>
using namespace std;
double x(int x1,int y1,int x2,int y2,int x3,int y3){
    return fabs(1.*(x2-x1)*(y3-y1)-(1.*(x3-x1)*(y2-y1)))/2.;
}
main(){
    int x1,y1,x2,y2,x3,y3,a,b,c;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    cout<<fixed<<x(x1,y1,x2,y2,x3,y3);
}