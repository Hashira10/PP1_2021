#include <iostream>
using namespace std;
char x(int n){
    if(n>=10) return 'A'+n-10;
    return n+'0';
}
void y(int m){
    if(m==0) return ;
    y(m/16);
    cout << x(m%16);
}
int main(){
    int n; cin >> n;
    y(n);
}