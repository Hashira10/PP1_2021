#include <iostream>
using namespace std;
void x(int n, int m){
    int arr[n][m];
    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i+j==0 or i+j==n+m-2) cout << "+";
            else if(i==0 and j==m-1) cout << "+";
            else if(i==n-1 and j==0) cout << "+";
            else if(i==0 ) cout <<"-";
            else if(i==n-1 ) cout <<"-";
            else if(j==0 ) cout <<"|";
            else if(j==m-1 ) cout <<"|";
            else cout << " ";
        }
        cout << endl;
    }
}
int main(){
    int n,m; cin>>n>>m;
    x(n,m);
}