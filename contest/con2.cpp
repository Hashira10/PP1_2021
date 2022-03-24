#include <iostream>
using namespace std;
int main(){
     int n, a=0,b=0;
     cin >> n ;
     int arr[n][n];
     for (int i=0; i<n; i++){
         for (int j=0; j<n; j++){
             cin >> arr[i][j];
         }
     }
     if(arr[a][b]==arr[n-1][n-1]) cout << "YES";
     else cout << "NO";
}
        