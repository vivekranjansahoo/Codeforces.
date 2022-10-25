#include <iostream>
#include <algorithm>
using namespace std;



inline void debugMode() {


#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}



int solve() {
	int n;
	cin >> n;
	if (n <= 3) {
		for (int i = 1; i <= n; i++) {
			cout << i << " ";
		}
		cout << endl;
		return 0;
	}
	int first = n / 2, last = n;
	if (n & 1) {
		last--;
	}
	for (int i = 1; i <= n / 2; i++) {
		cout << first << " " << last << " ";
		first--;
		last--;
	}
	if (n & 1) {
		cout << n;
	}
	cout << endl;
	return 0;
}
int main()
{
	debugMode();
	long long testCase;
	cin >> testCase;
	while (testCase--) {
		solve();
	}
	return 0;
}
