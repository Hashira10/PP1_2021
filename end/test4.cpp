#include<iostream>
using namespace std;
bool x(int n){
    if(n==1) return true;
    if(n!=1 && n%2!=0) return false;
    x(n/2);
}
int main(){
    int n; cin >> n;
    cout << (x(n) ? "YES" : "NO");
}