#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int m; cin >> m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    
    int max=-999999;
    for(int i=0; i<n; i++){
        int b=0;
        for(int j=0; j<m; j++){
            b+=arr[i][j];
        }
        if(b>max) max=b;
    }
    cout << max;
}