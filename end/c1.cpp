#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    for(int i=0; i<n+n-1; i++){
        for(int j=0; j<n+n-1; j++){
            cout << "[" << " " << i << " " << j << " " << "]";
        }
        cout << endl;
    }
}