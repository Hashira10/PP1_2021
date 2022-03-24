#include <iostream>
using namespace std;
int main(){
	int n; cin >> n;
	string s; 
	for(int i = 0; i < n; i++){
	    cin >> s;
    }
    for(int i = 0; i < n; i++){
	    if( i==0 and s[0] >= 'a' and s[0] <= 'z') s[0] -= 32;
	    if(i != n - 1) cout << s << " ";
	    else cout << s;
	    }
	cout << ".";
	return 0;
	}
