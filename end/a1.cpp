#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int sum=0;
    int max=-999999, min=9999999;
    int g=0, l=0, h=0;
    while(n--){
        h++;
        int x; cin >> x;
        int u=x;
        while(x--){
            string s,t; int k;
            cin >> s >> t >> k;
            sum+=k;
        }
        int ans=sum/u;
        if(ans>=max){
            max=ans;
            g=h;
        }
        if(ans<min){
            min=ans;
            l=h;
        }
        sum=0;
        ans=0;
    }
    cout << "The " << l << " flow is the most fucked up." << endl;
    cout << "The " << g <<  " flow is the most bada$$." << endl;
}