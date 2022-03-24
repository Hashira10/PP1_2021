#include<bits/stdc++.h> 
using namespace std; 
  
int getMaxArea(int hist[], int m){ 
    stack<int> s; 
    int max = 0; 
    int top;
    int at;
    int i = 0; 
    while (i < m) {
        if (s.empty() || hist[s.top()] <= hist[i]) s.push(i++); 
        else { 
            top = s.top(); 
            s.pop();
            at = hist[top] * (s.empty() ? i : i - s.top() - 1); 
            if (max < at) max = at; 
        } 
    }  
    while (s.empty() == false){ 
    top = s.top(); 
    s.pop(); 
    at = hist[top] * (s.empty() ? i : i - s.top() - 1); 
    if (max < at) max = at; 
    }
    return max; 
} 


int main() 
{ 
    int n;
    cin >> n;
    int hist[n];
    for(int i = 0; i < n; i++) cin >> hist[i];
    int m = sizeof(hist)/sizeof(hist[0]); 
    cout << getMaxArea(hist, n);
}  