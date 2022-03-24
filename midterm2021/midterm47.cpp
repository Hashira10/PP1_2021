#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    string arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    string s="";
    string t="";
    for(int i=0; i<n; i++){
        s=arr[i];
        reverse(arr[i].begin(), arr[i].end());
        if(s==arr[i]){
            t=arr[i];
            cout << t << endl;
        }

    }
    if(t=="") cout << "NO";
    
}
