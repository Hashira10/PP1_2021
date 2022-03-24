#include <iostream>
using namespace std;
int main(){
    int x; cin >> x;
    int n, m; cin >> n >> m;
    int b =(n & (1 << x));
    int c=(m & (1 << x));
    n+=c-b;
    m+=b-c;
    if(n==m) cout <<"Nothing has changed";
    else if(n>m) cout <<"Good deal for the first number";
    else cout << "Good deal for the second number";
}