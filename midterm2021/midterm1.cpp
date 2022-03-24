#include <iostream>
using namespace std;
int main(){
    int x; cin >> x;
    for(int i=0; i<=x; i++){
        int cnt=0;
        for(int j=i; j>0; j/=2){
            if(j % 2 == 1) cnt++;
        }
        cout << cnt;
        
    }
}