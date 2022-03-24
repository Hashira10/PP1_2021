#include <iostream>
using namespace std;
int main(){
    unsigned long long arr[3];
    for(int i=0; i<3; i++){
        cin >> arr[i];
    }
    unsigned long long S=0;
    unsigned long long V=0;
    S= 2*(arr[0]*arr[1] + arr[1]*arr[2] + arr[0]*arr[2]);
    V= arr[0]*arr[1]*arr[2];
    cout << S << " " << V;
    

}