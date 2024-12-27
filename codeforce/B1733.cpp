#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    if ((x == 0 && y == 0) || (x != 0 && y != 0))
    {
        cout << "-1" << endl;
    }
    else
    {
        int ans = 0;
        int k = max(x, y);
        for (int i = 1; i < n; i = i + k)
        {
            ans += k;
        }
        if (ans != (n - 1))
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                for (int j = 0; j < k; j++)
                {
                    cout << i << " ";
                }
                i = i + k;
            }
            cout << endl;
        }
    }
}
int main()
{
    int tast;
    cin >> tast;
    for (int i = 0; i < tast; i++)
    {
        solve();
    }
}
/*
5
5 2 0
8 1 2
3 0 0
2 0 1
6 3 0
*/
