#include <bits/stdc++.h>
using namespace std;

bool IsPalindromePermut(vector<int> v, int cnt = 0, int exc = 0){
    for(int i = 0; i < v.size(); i++){
        cnt = 0;
        for(int j = 0; j < v.size(); j++){
            if(v[i] == v[j]) cnt++;
        }
        if(cnt == 1) exc++;
        if(cnt % 2 != 0 && exc > 1) return false;
    }
    return true;
}

bool IsPalindrome(vector<int> v){
    vector<int> w=v;
    reverse(v.begin(), v.end());
    return w == v;
}

int main(){
    int n; cin >> n;
    vector<int> v;
    while(n--){
        int x; cin >> x;
        v.push_back(x);
    }

    if(!IsPalindromePermut(v)) cout << "Impossible";
    else{
        sort(v.begin(), v.end());
        do{
            if(IsPalindrome(v)){
                for(int i = 0; i < v.size(); i++){
                    cout << v[i] << ' ';
                }
                return 0;
            }
        }
        while(next_permutation(v.begin(), v.end()));
    }
}