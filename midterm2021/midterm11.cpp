#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double n; cin >> n;
    int m;
    char ch; cin >> ch;
    if(ch == 'k'){
        cin >> m;
        cout << fixed << setprecision(m) << n/1024;
    }
    else if(ch == 'b'){
        cout << n*1024;
    }
}