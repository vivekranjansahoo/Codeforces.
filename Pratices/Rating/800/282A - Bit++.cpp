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
	int n, x(0);
	cin >> n;

	string s;
	while (n--)
	{
		cin >> s;
		if (s[1] == '+')
		{
			++x;
		}
		else
		{
			--x;
		}
	}

	cout << x << endl;
	return 0;
}
