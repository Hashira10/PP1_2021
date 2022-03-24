#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    if(n>=13 && n<=24) cout << "Owl";
    if(n>=0 && n<=12) cout << "Lark";
    if(n>24) cout << "Owl";
}