#include <iostream>
using namespace std;

int main(){
    int n,m,x,c;
    cin >> n >> m >> x;
    int arr[n][m];
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            int x=arr[i+1][j+1];
        }
    }
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++){
            if(arr[i][j]==arr[i+1][j+1]) arr[i+1][j+1]=arr[i][j];
            if(arr[i][j]==x) 
            c++;
             
        }
        
    }
    cout << c;
}
