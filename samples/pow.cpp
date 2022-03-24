#include<bits/stdc++.h>
using namespace std;
void x(int n, int ans){
    if(ans>n){
        cout << "NO";
        return;
    }
    if(ans==n){
        cout << "YES";
        return;
    }
    x(n,ans*2);

}
int main(){
    int n; cin >> n;
    x(n,1);
}