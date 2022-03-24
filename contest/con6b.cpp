#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[2][n];
    int k=0;
    int sum=0;
    for(int i=0; i<2; i++){
        for (int j=0; j<n; j++){
            cin >> arr[i][j];
            k = arr[i][j]-arr[i+1][j];
            sum+=k;
            
        }
    }
    cout << sum;
}