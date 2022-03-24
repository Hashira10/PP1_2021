#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int x=0, y=n+n-2;
    for (int i=0; i<n; i++){
        for(int j=0; j<(n+n)-1; j++){
            if(j>=x and j<=y) {
                cout << "*";
            }
            else cout << ".";

        }
        x++;
        y--;
        cout << endl;
    }
}