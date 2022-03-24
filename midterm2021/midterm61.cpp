#include <iostream>
using namespace std;
double x(double p, double q){
    return q/p;
}
int main(){
    int n; cin >> n;
    string s;
    double p,q;
    double ans=0;
    double max=0;
    string maxs;
    while(n--){
        cin >> s >> p >> q;
        ans=x(p,q);
        if(ans>max) {
            max=ans;
            maxs=s;
        }
    }
    cout << maxs;
}