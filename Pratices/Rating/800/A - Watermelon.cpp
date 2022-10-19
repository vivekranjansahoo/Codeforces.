#include <iostream>
using namespace std;
 
 
 
inline void debugMode() {
 
 
#ifndef ONLINE_JUDGE
 
	freopen("input.txt", "r", stdin);
 
	freopen("output.txt", "w", stdout);
 
#endif // ONLINE_JUDGE
}
 
 
 
 
int main() {
	// your code goes here
	debugMode();
	int  x;
	cin >> x;
	if (x % 2 == 0 && x > 2) {
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;
 
 
	return 0;
}
