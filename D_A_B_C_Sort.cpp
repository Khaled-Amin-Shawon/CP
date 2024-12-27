/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int j = 0; j < n; j++)
    {
        cin >> a[j];
    }
    vector<int> b = a;
    sort(b.begin(), b.end());
    bool ok = true;
    if (n % 2 == 1)
    {
        if (a[0] != b[0])
        {
            ok = false;
        }
    }
    for (int j = n % 2; j < n; j += 2)
    {
        if (!(a[j] == b[j] && a[j + 1] == b[j + 1] || a[j] == b[j + 1] && a[j + 1] == b[j]))
        {
            ok = false;
        }
    }
    if (ok)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}