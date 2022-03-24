#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
    int n; cin >> n;
    double gpa = 0;
    int cred = 0;
    for(int i=0; i<n; i++){ 
        int x,y,z,w; cin >> x >> y >> z >> w; 
        int sum=0; 
        cred+=w;
        if(x+y >= 30 && z >= 20){ 
            int sum=x+y+z;
            double c = 2.0 / 3, b = 1.0 / 3; 
            if(sum >= 50 && sum <= 54) gpa += w;
            if(sum >= 55 && sum <= 59) gpa += (1 + (b)) * w;
            if(sum >= 60 && sum <= 64) gpa += (1 + (c)) * w;
            if(sum >= 65 && sum <= 69) gpa += 2 * w;
            if(sum >= 70 && sum <= 74) gpa += (2 + (b)) * w;
            if(sum >= 75 && sum <= 79) gpa += (2 + (c)) * w;
            if(sum >= 80 && sum <= 84) gpa += 3 * w;
            if(sum >= 85 && sum <= 89) gpa += (3 + (b)) * w;
            if(sum >= 90 && sum <= 94) gpa += (3 + (c)) * w;
            if(sum >= 95 && sum <= 100) gpa += 4 * w;
        
        } 
    }    
    cout << gpa/cred; 
}