#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[51];
    int b[51];
    int cnt2=0;
    int cnt=0;
    while(cin >> n) arr[cnt++]=n;
    int x; x = arr[cnt-1];
    for(int i=1; i<51; i++){
        for(int j=0; j<cnt; j++){
            if(i!=arr[j]) b[cnt2++]=i
        }
    }
    for(int i=1; i<=cnt2; i++){
        cout << b[x];
    }
    
}