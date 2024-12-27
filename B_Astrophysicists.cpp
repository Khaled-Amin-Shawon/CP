/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
#define ll long long int
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
using namespace std;
void solve()
{
    ll n, k, g;
    cin >> n >> k >> g;
    if (k * g - (((g + 1) / 2) - 1) * n < 0)
    {
        cout << k * g << endl;
        return;
    }
    cout << k * g - ((((k * g - (((g + 1) / 2) - 1) * n + g - 1) / g) * g)) << endl;
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