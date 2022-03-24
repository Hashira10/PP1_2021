#include <iostream>
using namespace std;
void x(int n, int m){
    int i=n;
    while(i<=m){
        if(i%2==0) cout << i << " ";
        i++;
    }
}
int main(){
    int n, m; cin >> n >> m;
    x(n,m);
}