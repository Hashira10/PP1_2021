#include<bits/stdc++.h>
using namespace std;
int main(){
    long long c,h,o; cin >> c >> h >> o;
    long long a=0, b=0, k=0;
    a=c/2;
    b=h/6;
    k=o/1;
    long long arr[3]={a,b,k};
    long long min=a;
    for(int i=0; i<3; i++){
        if(arr[i]<min) min=arr[i];
    }
    cout << min;
}