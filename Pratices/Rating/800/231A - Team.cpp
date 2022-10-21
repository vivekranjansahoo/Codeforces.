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

    int n, Petya, Vasya, Tonya, number(0);
    cin >> n;
    while (n--)
    {
        cin >> Petya >> Vasya >> Tonya;
        if (Petya + Vasya + Tonya >= 2)
        {
            number += 1;
        }
    }
    cout << number << endl;
    
    return 0;
}
