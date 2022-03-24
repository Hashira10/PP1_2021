#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][2];
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cin >> arr[i][j];
        }
    }
    int sum1=0,sum2=0;
    for(int i=0; i<3; i++){
        sum1+=arr[i][0];
        sum2+=arr[i][1];
    }
    if(sum1>sum2) cout << "Grats Yelnur";
    if(sum1<sum2) cout << "Hee Hee Losers";
    if(sum1==sum2) cout << "Draw";
}