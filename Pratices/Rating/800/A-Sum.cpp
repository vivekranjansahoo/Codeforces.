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
 
int main() {
	// your code goes here
	//debugMode();
	int t, x, y, z, ans, ans1, ans2;
	cin >> t;
	while (t--) {
		cin >> x >> y >> z;
		ans = x + y;
		ans1 = x + z;
		ans2 = y + z;
 
		if (ans == z || ans1 == y || ans2 == x) {
			cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;
		//cout << ans << endl;
	}
 
	return 0;
}
