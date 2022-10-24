#include <iostream>
using namespace std;



inline void debugMode() {


#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}



int main()
{
	debugMode();

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		string s;

		for (int i = 0; i < n; i++) {
			char ch;
			cin >> ch;
			s += ch;
		}
		int i = 0;
		while (i < n) {
			if (s[i] == 'Q') {
				bool flag = false;
				for (int j = i + 1; j < n; j++) {
					if (s[j] == 'A') {
						s[i] = '0', s[j] = '0';
						flag = true;
					}
					if (flag) break;
				}
			}
			i++;
		}

		bool flag = true;

		for (int i = 0; i < n; i++) {
			if (s[i] == 'Q') {
				flag = false;
			}
		}

		if (flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}
