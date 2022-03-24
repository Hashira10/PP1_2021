#include <iostream>
#include <set>
#include <iterator>
using namespace std;
int main(){
    set<char> st;
    char ch;
    while(cin >> ch){
        st.insert(ch);
    }
    
    set<char> :: iterator it = st.begin();
    for(it = st.begin(); it!= st.end(); it++){
        cout << *it << " ";
    }
    return 0;
}