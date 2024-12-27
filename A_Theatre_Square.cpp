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
    ll n, m, a;
    cin >> n >> m >> a;
    ll ans = 0;
    while (m > 0)
    {
        if (n % a) ans += n / a + 1;
        else ans += n / a;
        m -= a;
    }
    cout<<ans<<endl;
}
int main()
{
    fast;
    ll t = 1;
    while (t--)
    {
        solve();
    }
}