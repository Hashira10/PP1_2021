#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int y=0;
unsigned long long gens(){
    unsigned long long x=1;
    for(int i=1; i<=y; i++) x*=y;
    y++;
    return x;
}
int main(){
    int n; cin >> n;
    vector<unsigned long long> v(n+1);
    generate(v.begin(),v.end(), gens);
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}