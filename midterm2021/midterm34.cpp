#include <iostream>
using namespace std;
int main(){
    char arr[15];
    char brr[15];
    for(int i=0; i<15; i++){
        cin >> arr[i];
    }
    for(int i=0; i<15; i++){
        cin >> brr[i];
    }
    int cnt1 = 0; 
    int cnt2 = 0;
    for(int i=0; i<15; i++){
        if(arr[i]=='R' && brr[i]=='S') cnt1++;
        else if(arr[i]=='S' && brr[i]=='P') cnt1++;
        else if(arr[i]=='P' && brr[i]=='R') cnt1++;
        else if(arr[i]=='S' && brr[i]=='R') cnt2++;
        else if(arr[i]=='P' && brr[i]=='S') cnt2++;
        else if(arr[i]=='R' && brr[i]=='P') cnt2++;
        
    }
    if(cnt1>cnt2) cout << "First player wins!";
    else if(cnt1<cnt2) cout << "Second player wins!";
    else if(cnt1==cnt2) cout << "Friendship";
}