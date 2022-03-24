#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[1000],i,n,k,L,R;
    cin>>n;

    for(i=1;i<=n;i++) cin>>a[i];
    cin>>k;
    while(k){
        k--;
        cin>>L>>R;
        for(i=L;i<=R;i++)
        cout<<a[i]<<' ';
    }
    cout<<endl;
}