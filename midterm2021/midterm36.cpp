#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            
            for(int k=0; k<m; k++){
                if(arr[i][j]<arr[i][k] && i%2==0) swap(arr[i][j], arr[i][k]);
                else if(arr[i][j]>arr[i][k] && i%2!=0) swap(arr[i][j], arr[i][k]);
                
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}