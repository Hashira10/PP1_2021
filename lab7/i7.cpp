#include <iostream>
using namespace std;
long long x(long long m){
    int n; cin >> n;
    if(n!=0) {
        m+=n;
        return x(m);
    }
    return m;
}
    
int main(){
    cout << x(0);
    
}