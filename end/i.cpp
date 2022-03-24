#include <bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    vector <char> words, v;
    while(cin >> ch){
        words.push_back(ch);
        v.push_back(ch);
    }
    for(int i = 0;i < words.size();i++)
    {
        int cnt = 0;
        for(int j = 0;j < words.size() && cnt < 2;j++)
        {
            if(words[i] == words[j])
                v.pop_back(words[j]);
        }
        if(cnt == 1){
            cout << words[i];
        }
    }
}
