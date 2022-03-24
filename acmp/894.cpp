#include <bits/stdc++.h>
using namespace std;
double pi = 3.14159265358979323846264338327950288;

int main() {
    double s, r1; cin >> s >> r1;
    double y = pi * r1 * r1;
    double x = y - s;
    double r2 = sqrt(x / pi);
    cout << fixed << setprecision(3) << r2;
}