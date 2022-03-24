#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c; cin >> a >> b >> c;
    if((b==1 || b==3 || b==5 || b==7 || b==8 || b==10) && a==31){
        b++;
        cout << 1 << " " << b << " " << c;
        return 0;
    }
    if(b==12 && a==31){
        c++;
        cout << 1 << " " << 1 << " " << c;
        return 0;
    }
    if((b==4 || b==6 || b==9 || b==11) && a==30){
        b++;
        cout << 1 << " " << b << " " << c;
        return 0;
    }
    if(b==2 && a==28){
        b++;
        cout << 1 << " " << b << " " << c;
        return 0;
    }
    else {
        a++;
        cout << a << " " << b << " " << c;
    }
}