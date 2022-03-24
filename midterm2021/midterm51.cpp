#include <iostream>
using namespace std;
int main(){
    string s; cin >> s;
    int max=0, cnt=1;
    char ch;
    for(int i=0; i<s.size()-1; i++){
        if(s[i]!=s[i+1]){
            if(max<cnt){
                ch = s[i];
                max=cnt;
            }
            cnt=1;
        }
        else cnt++;
    }
    if(cnt>max){
        ch=s[s.size()-1];
        max=cnt;
    }
    cout << ch << " " << max;
}