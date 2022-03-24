#include <iostream>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int i=n;
    int j=i;
    int k;
    while(i<=m && j>0){
        j/=10;
        if(i%10==5) k=i;
        if(j==5) k=j;
            
        cout << k << " ";
    }
}