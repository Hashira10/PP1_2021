#include <bits/stdc++.h>
using namespace std;

int n, m, k;
char arr[1010][1010];

int main() {
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			arr[i][j] = '.';
        }
    }
	while (k--) {
		int x, y;
		cin >> x >> y;
		arr[x][y] = '*';
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++) {
            int cnt = 0;
			if (arr[i][j] == '*') continue;
			for (int i1 = max(0, i - 1); i1 <= min(n - 1, i + 1); i1++){
				for (int j1 = max(0, j - 1); j1 <= min(m - 1, j + 1); j1++){
					if (arr[i1][j1] == '*') cnt++;
                }
            }
			if (cnt > 0) arr[i][j] = char(cnt + '0');
		}
    }
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++){
			cout << arr[i][j] << ' ';
        }
		cout << endl;
    }
}