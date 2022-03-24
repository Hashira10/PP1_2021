#include <iostream>
#include <string>
using namespace std;
int main(){
    string s,t; 
    getline(cin,s);
    getline(cin,t);
    int x=-1;
    for(int i=0; i<s.size(); i++)
    if(s.find(t) !=-1) x=s.find(t);
    cout << x;
    return 0;

}