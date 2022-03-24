#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        arr[0]=2;
        if(i!=0) arr[i]=arr[i-1]+3;
        cout << arr[i]<< " ";
    }
}