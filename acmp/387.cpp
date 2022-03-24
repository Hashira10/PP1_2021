#include <iostream>
#include <string>
using namespace std;
int main() {
    int n; cin >> n;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        string production; cin >> production;
        if(production[0] == production[3]) count++;
    }
    cout << count;
}