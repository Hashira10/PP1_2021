#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double sum1=0;
    double sum2=0;
    double m=0;
    while(cin >> n){
        if(n%2==0 && n>=0) sum1++;
        if(n%2!=0 && n>0) sum2++;
        if(n>0) m++;
    }
    double p1=(sum1*100)/m;
    double p2=(sum2*100)/m;
    cout << fixed << setprecision(5) << p1 << " " << p2;
}