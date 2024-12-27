#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int c;
    cin >> c;
    cout << c << " ";
    while (c > 1)
    {

        if (c % 2 != 0)
        {
            c = (c * 3) + 1;
        }
        else
        {
            c /= 2;
        }
        cout << c << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test = 1;
    // cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}
