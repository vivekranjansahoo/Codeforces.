#include <iostream>
#include <bits/stdc++.h>
using namespace std;

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
        int n;
        cin >> n;
        int a[n], b[n];
        long long sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum1 += a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            sum2 += b[i];
        }
        sort(b, b + n); // 0
        long long ans = sum1 + sum2 - b[n - 1];
        cout << ans << endl;

    }

    return 0;
}

