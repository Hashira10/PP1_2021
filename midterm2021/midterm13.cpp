#include <iostream>
using namespace std;
bool x(int n, int m){
    for(int i=2; i<500; i++){
        if(n==2 && m%2==0) return true;
        if((n%i==0 && n!=i) || n>500 || m%2!=0) return false;
    }
    return true;
}
int main(){
    int n,m; cin >> n >> m;
    cout << (x(n,m) ? "Good job!" : "Try next time!");
}