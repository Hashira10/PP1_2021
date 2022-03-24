#include <iostream>
#include <set>
using namespace std;
int main(){
    int n; cin >> n;
    set<char> num, cap, low;
    for(char i='0'; i<='9'; i++) num.insert(i);
    
    for(char i='a'; i<='z'; i++) low.insert(i);
    
    for(char i='A'; i<='Z'; i++) cap.insert(i);

    while(n--){
        string s; cin >> s;
        for(int i=0; i<s.size(); i++){
            if(s[i]<58) num.erase(s[i]);
            else if(s[i]>96) low.erase(s[i]);
            else cap.erase(s[i]);
        }
    }
    set<char> :: iterator it1;
    set<char> :: iterator it2;
    set<char> :: iterator it3;
    cout << "Lower case: ";
    for(it1=low.begin(); it1!=low.end(); it1++) cout << *it1 << ' ';
    cout << "\nUpper case: ";
    for(it2=cap.begin(); it2!=cap.end(); it2++) cout << *it2 << ' ';
    cout << "\nNumbers: ";
    for(it3=num.begin(); it3!=num.end(); it3++) cout << *it3 << ' ';
}