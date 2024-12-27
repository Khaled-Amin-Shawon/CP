#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int y = 1;
        for (int i = 1; i < x; i++)
        {
            if (y < __gcd(x, i) + i)
                y = i;
        }
        cout << y << endl;
    }
    return 0;
}