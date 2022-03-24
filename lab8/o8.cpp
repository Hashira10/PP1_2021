#include <iostream>
#include <set>

using namespace std;
int main(){
    string s; cin >> s;
    set<char> k;
    for(int i=0; i<s.size(); i++){
        k.insert(tolower(s[i]));
    }
    cout << k.size() << endl;
    set<char> :: iterator it;
    for(it=k.begin(); it!=k.end(); it++){
        cout << *it << " ";
    }
}