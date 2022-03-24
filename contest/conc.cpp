#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
        if (i%2!=0) arr[i][j]=1;
        else if (i%2==0) arr[i][j]=2;
        else if (i==0) arr[i][j]=0;
        cout << arr[i][j];
        }
    }
    cout << endl;
}