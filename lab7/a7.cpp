#include <iostream>
using namespace std;
int x(int n, int ans, int cnt){     
    if(n == cnt) return ans;          
    return x(n, ans * 2, cnt + 1);    
}


int main(){
    int n; cin >> n;
    
    cout << x(n, 1, 0);
}