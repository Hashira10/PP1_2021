#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    string ans = "";
    while(n){
        ans += (n%2)+'0';
        n/=2;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    
    int b=0, a=0;
    for(int i=0; i<ans.size(); i++){
        if(ans[i]=='0') b++;
        if(ans[i]=='1') a++;
    }
    cout << "zeros " << b << endl;
    cout << "number of units " << a << endl;
}