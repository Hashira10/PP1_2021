#include <iostream>
using namespace std;
void p(int n, int k){
    if(n!=0) cout << k <<" ";
    p(n/=10, k==n%10);
}
int main(){
    int n; cin >> n;
    p(n/=10,n%10);
}