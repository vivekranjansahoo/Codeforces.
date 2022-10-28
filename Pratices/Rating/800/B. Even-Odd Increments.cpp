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
        int n, k;
        cin >> n >> k;
        int arr[n];
        long long sum = 0;
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if (arr[i] % 2 == 0)even++;
            else odd++;
        }
        while (k--)
        {
            int a, b;
            cin >> a >> b;
            if (a == 0 && b % 2 == 0)
            {
                sum += (even * b);
            }
            else if (a == 0 && b % 2 != 0)
            {
                sum += (even * b);
                odd += even;
                even = 0;
            }
            else if (a == 1 && b % 2 != 0)
            {
                sum += (odd * b);
                even += odd;
                odd = 0;
            }
            else if (a == 1 && b % 2 == 0)
            {
                sum += (odd * b);
            }
            cout << sum << endl;
        }

    }

    return 0;
}

