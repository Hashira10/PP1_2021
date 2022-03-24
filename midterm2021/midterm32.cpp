#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    char arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int a=0, b=0, c=0;
    for(int i=0; i<n; i++){
        if(arr[i]=='H') a++;
        else if(arr[i]=='D') b++;
        else if(arr[i]=='O') c++;
    }
    
    cout << "Orks: " << c/3 << endl;
    cout << "Dragons: " << b/3 << endl;
    cout << "Humans: " << a/3 << endl;

}