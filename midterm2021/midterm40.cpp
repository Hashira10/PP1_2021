#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    if(n<8 && m<8){
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
    
                if(i==n && j==m) cout << 1 << " "; 
            
                else if((i==n && j!=m) || (i!=n && j==m)) cout << 2 << " ";
        
                else if(i+j==n+m) cout << 2 << " ";

                else if((i-j == n-m) || (abs(i-n) == 1 && abs(j-m) == 1)) cout << 2 << " ";
                
                else cout << "* ";
            
            }
            cout << endl;
        }
    
    }
    
    else if(n>7 || m>7) cout << "Impossible";
}