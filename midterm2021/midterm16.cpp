#include <iostream>
using namespace std;
bool x(int d, int m, int y){
    if(m>=1 && m<=12 && y>=1970 && y<=2035){
        if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
            if(d<1 || d>31) return false;
        }
        if(m==4 || m==6 || m==9 || m==11){
            if(d<1 || d>30) return false;
        }
        if(m==2){
            if(d<1 || d>28) return false;
        }
        return true;
        

    }
    return false;
    
}
int main (){
    int n, m, k; cin >> n >> m >> k;
    cout << (x(n,m,k) ? "YES" : "NO" );
}