#include <iostream>
using namespace std;

int main(){
    int n, x, num, t; cin >> n >> x;
    for(int i = 1; i <= n; i++){
        t=1;
        while (t>0){
            num=t%10;
            t/=10;
            if(num == x) cout << i << " ";
            else if(i % 10 == x) cout << i << " ";
        }
    }
}