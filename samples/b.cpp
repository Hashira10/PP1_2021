#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > v;
bool xxx(int a, int b){
    for(int i=0; i<v.size(); i++){
        pair<int,int> p=v[i];
        int curX=p.first;
        int curY=p.second;
        if(a==curX && b==curY){
            return true;
        }
    }
    return false;
}
int main(){
    queue<pair<int,int> > q;
    int n,m; cin >> n >> m;
    char arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    q.push(make_pair(0,0));
    while(!q.empty()){
        pair<int,int> p = q.front();
        q.pop();
        int x=p.first;
        int y=p.second;
        v.push_back(make_pair(x,y));
        if(x == n-1 && y == m-1){
            cout << "YES";
            return 0;
        }
        if(x-1>0 && arr[x-1][y]!='#'){
            if(!xxx(x-1,y)){
                q.push(make_pair(x-1,y));
            }
        }
        if(x+1<n && arr[x+1][y]!='#'){
            if(!xxx(x+1,y)){
                q.push(make_pair(x+1,y));
            }
        }
        if(y-1>0 && arr[x][y-1]!='#'){
            if(!xxx(x,y-1)){
                q.push(make_pair(x,y-1));
            }
        }
        if(y+1<m && arr[x][y+1]!='#'){
            if(!xxx(x,y+1)){
                q.push(make_pair(x,y+1));
            }
        }
    }
    cout << "NO";
    return 0;
}