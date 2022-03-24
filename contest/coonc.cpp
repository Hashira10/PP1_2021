#include <iostream>
using namespace std;
int m(int i, int max, int cnt){
    int arr[i];
    if(arr[i]==0) return cnt;
    if(arr[i]>max) max = arr[i];
    if(max==arr[i+1]) cnt++;

    return m(++i, max, cnt);
}
int main(){
    int i=0;
    while(i){
        int arr[i];
        cin >> arr[i];
        i++;
    }
    cout << m(0, -99999999, 0);
}
