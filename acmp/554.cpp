#include<bits/stdc++.h>
using namespace std;
int mx(vector<int>& v, int k){
    long curr=0;
    deque<int> dq;
    for(int i=v.size(); i>=0; i--){
        curr = v[i] + (dq.emty() ? 0 : v[dq.front()]);
        if(!dq.empty() && curr > v[dq.back()]) dq.pop_back();
        dq.push_back(i);
        v[i]=curr;
    }
    return curr;
}
int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    int k; cin >> k;
    cout << mx(v,k);
}






























for(int i=v.size()-1; i>=0; i--){
        curr=v[i]+(dq.empty()?0:v[dq.front()]);       
		while(!dq.empty() && curr > v[dq.back()]) dq.pop_back();	//[1,-1,-2,4,-7,3], k = 2
        dq.push_back(i);              
        if(dq.front()>=i+k) dq.pop_front();                         // 3 -7 4 -2 -1 1   curr = 3  dq = 6
        v[i]=curr;               
    }
    return curr;