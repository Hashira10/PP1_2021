#include<bits/stdc++.h>
using namespace std;
int n = 0;

string bin(){
    n++;
    int m=n;
    string res = "";
    while(m!=0){
        res += m%2+'0';
        m /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    int k; cin >> k;
    vector<string> v(k);
    generate(v.begin(), v.end(), bin);
    for(int i=0; i<k; i++){
        cout << i+1 << " in binary: " << v[i] << '\n';
    }
}