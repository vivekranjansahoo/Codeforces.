#include <bits/stdc++.h>
using namespace std;

inline void debugMode() {

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}

int main() {
	debugMode() ;
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int a[m][2];

		for (int i = 0; i < m; i++) {
			cin >> a[i][0] >> a[i][1];
		}
		if (n > m) {
			cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;
	}
	return 0;
}
