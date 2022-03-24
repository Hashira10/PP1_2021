#include <iostream>
using namespace std;

void x(string s){
    for(int i=0; i< s.size(); i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) cout << s[i];
    }
    cout << endl;
}
int main(){
    string s;
    while(cin >> s){
        x(s);
    }

}


