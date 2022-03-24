#include <iostream>
using namespace std;
bool w(string s, int i, int j){
    if(s[i]==s[j]) return true;
    else return false;
    w(s, i++, j--);

}
int main(){
    string s; cin >> s;
    cout << (w(s, 0, s.size()-1) ? "Yes" : "No");
}