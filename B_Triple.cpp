#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int c = 1;
    int value;
    int len = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            c++;
            if (c > len)
            {
                len = c;
                value = a[i];
            }
        }
        else
        {
            c = 1;
        }
    }
    if (len < 3)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << value << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}