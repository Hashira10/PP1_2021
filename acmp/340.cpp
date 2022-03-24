#include <bits/stdc++.h>
using namespace std;
bool x(int box1[3], int box2[3]) {
    for (int i = 0; i < 3; ++i) {
        if (box1[i] > box2[i]) return false;
    }
    return true;
}

int main() {
    int box1[3]; for (int i = 0; i < 3; ++i) cin >> box1[i];
    sort(box1, box1 + 3);
    int box2[3]; for (int i = 0; i < 3; ++i) cin >> box2[i];
    sort(box2, box2 + 3);
    if (equal(box1, box1 + 3, box2)) cout << "Boxes are equal";
    else if (x(box1, box2)) cout << "The first box is smaller than the second one";
    else if (x(box2, box1)) cout << "The first box is larger than the second one";
    else cout << "Boxes are incomparable";
}