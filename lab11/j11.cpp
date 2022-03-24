#include<bits/stdc++.h>
using namespace std;
struct Point {
    double xCord, yCord, ans;
    Point(double x, double y, double x1, double y1) {
        xCord = x1;
        yCord = y1;
        ans = sqrt(pow((xCord - x), 2) + pow((yCord - y), 2));
    }

};

bool cmp(Point a, Point b) {
    return a.ans < b.ans;
}

vector<Point> points;

int main() {
    double x0, y0; cin >> x0 >> y0;
    int n; cin >> n;

    for(int i = 0; i < n; i++) {
        double x, y; cin >> x >> y;
        Point *p = new Point(x0, y0, x, y);
        points.push_back(*p);
    }

    sort(points.begin(), points.end(), cmp);
    for(int i = 0; i < n; i++) {
        cout << points[i].xCord << " " <<  points[i].yCord << endl;
    }

    return 0;
}