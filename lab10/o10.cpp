#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void y(int n){
	string s = "";
	if(n==0) return;
	while(n!=0){
		s+=char(n%2+48);
		n/=2;
	}
	reverse(s.begin(),s.end());
	cout<<s<<endl;
}
int main(){
	int n;
	cin>>n;
	int x;
	vector<int> v;
	for(int i = 0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	for_each(v.begin(),v.end(),y);
}