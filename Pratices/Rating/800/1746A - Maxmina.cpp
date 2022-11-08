#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

inline void debugMode() {

#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}


void fast()
{
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    debugMode();
    fast();
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int sum = 0;
        for (int i = 0 ; i < n ; i++) {
            int a;
            cin >> a;
            sum += a;
        }
        if (sum > 0) cout << "YES" << endl;
        else cout << "NO" << endl;


    }

    return 0;
}

