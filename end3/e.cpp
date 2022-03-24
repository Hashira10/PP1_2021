#include<bits/stdc++.h>
using namespace std;
main (){
    int m; cin >> m;
    for (int a=2; a <= m; a++){
        bool ok=true;
        for(int c=2 ; c*c <= a ; c++){
            if(a%c==0){
                ok=false;
                break;
            }
        }
        for(int d=2 ; d*d <= m-a ; d++){
            if((m-a) % d == 0){
                ok=false;
                break;
            }
        }
        if(ok){
            cout << a << " " << m-a;
            return 0;
        }
    }
}