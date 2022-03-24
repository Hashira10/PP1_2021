#include <iostream>
using namespace std;
void x(int n, int i){
    if(i==n+1) return;
    cout << i << " ";
    x(n, ++i);
    
}
int main(){
    int n; cin >> n;
    x(n, 1);
}