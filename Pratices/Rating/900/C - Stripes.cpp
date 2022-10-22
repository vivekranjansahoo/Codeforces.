#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

inline void debugMode() {

#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}




int main()
{
    debugMode();
    long long testCase;
    cin >> testCase;
    while (testCase--) {
        vector<vector<char>> grid(8, vector<char>(8, '.'));
        for (ll i = 0; i < 8; i++) {
            for (ll j = 0; j < 8; j++) {
                cin >> grid[i][j];
            }
        }
        bool done = false;
        // check all row
        for (int i = 0; i < 8; i++) {
            bool flag = true;
            for (int j = 0; j < 8; j++) {
                if (grid[i][j] != 'R') {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                done = true;
                cout << "R" << endl;
                break;
            }
        }
        if (!done) {
            for (int i = 0; i < 8; i++)
            {
                bool flag = true;
                for (int j = 0; j < 8; j++)
                {
                    if (grid[j][i] != 'B')
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    done = true;
                    cout << "B" << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
