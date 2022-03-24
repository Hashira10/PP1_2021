#include <iostream>
using namespace std;
void x(int n, int arr[]){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout << sum;
}
int main(){
    int n; cin >> n;
    int arr1[n];
    for(int i=0; i<n; i++) cin >> arr1[i];
    x(n, arr1);

}