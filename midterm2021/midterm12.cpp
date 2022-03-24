#include <iostream>
using namespace std;
int main(){
    unsigned long long d, c, n; cin >> d >> c >> n;
    unsigned long long di, ci; cin >> di >> ci;
    unsigned long long a = n*((d*100)+c);
    unsigned long long b = (di*100) + ci;
    if(a>b) cout << -1;
    else {
        unsigned long long r=b-a;
        cout << r/100 << " " << r%100;
    }

}
