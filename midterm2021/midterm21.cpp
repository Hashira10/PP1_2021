#include <iostream>
using namespace std;
int main(){
    int n, a, b; cin >> n >> a >> b;
    int arr[n];
    int sum = 0;
    for(int i=0; i<n; i++){
        arr[0]=a;
        if(i!=0) arr[i]=arr[i-1]+b;
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout << "sum: "<< sum;
}