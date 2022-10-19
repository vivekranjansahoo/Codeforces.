#include <iostream>
using namespace std;

/*

inline void debugMode() {


#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}
*/

int n, k, a, b = 0, mas[10000];

int main() {
	// your code goes here
	//debugMode();

	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		mas[i] = a;
	}
	for (int j = 1; j <= n; j++) {
		if (mas[j] >= mas[k] && mas[j] > 0) {
			b++;
		}
	}
	cout << b;


	return 0;
}
