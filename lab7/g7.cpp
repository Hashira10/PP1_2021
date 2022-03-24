#include <iostream>
using namespace std;
int w(int n){
    if(n>1) return n*w(n-1);
    else return 1;
}
    
int main(){
    int n; 
    cin >> n;
    
    cout << w(n);
}