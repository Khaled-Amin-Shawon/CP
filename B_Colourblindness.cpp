#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string x, y;
    cin >> x >> y;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == y[i])
        {
            continue;
        }
        else if (x[i] == 'G' && y[i] == 'B')
        {
            continue;
        }
        else if (x[i] == 'B' && y[i] == 'G')
        {
            continue;
        }
        else
        {
            flag++;
            break;
        }
    }
    if (flag)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}