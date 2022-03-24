#include <iostream>
using namespace std;
bool x(long long n){
    if(n == 1) return true;
    if(n!=1 && n%2==1) return false;
    return x(n/2);
}

int main(){
    int n; cin >> n;
    cout << (x(n) ? "Yes" : "No");
}