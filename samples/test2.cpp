#include <iostream>
#include <map>
using namespace std;

map<int, long long> mp;

long long tribo(int n){
    if(n==0) return 0;
    if(!mp[n]){
        mp[n] = tribo(n-1) + tribo(n-2) + tribo(n-3);
    }
    return mp[n];
}

long long sum(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(n==2) return 2;
    return tribo(n) + sum(n-1);
}

int main(){
    int n; cin >> n;
    mp[0] = 0;
    mp[1] = 1;
    mp[2] = 1;
    cout << sum(n-1);
}