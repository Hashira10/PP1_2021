#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int m=0;
    int cnt=0;
    while(m<500000){
        m+=n*0.3;
        n+=n*0.1;
        cnt++;
    }
    cout << cnt;
}