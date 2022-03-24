#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;

    for(int i = n*n; i < n; i-n){
        for(int j =i-n; j < n; j-n){
            cout << i << " ";
        }
    }
}