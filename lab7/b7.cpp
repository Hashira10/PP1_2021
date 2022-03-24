#include <iostream>
using namespace std;
void x(int n){
    if(n==0) return;
    x(n/2);
    cout << n%2;

}
int main(){
    int n; cin >> n;
    x(n);
}