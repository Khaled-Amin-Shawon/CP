#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a[3];
        ll m = 0;
        for (ll i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 3);
        if (a[0] + a[1] == a[2])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}