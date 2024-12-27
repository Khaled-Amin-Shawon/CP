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
    ll n;
    cin >> n;
    map<ll, ll> m;
    ll r = 0;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        m[k]++;
        if (m[k] % 2 == 0)
        {
            ans--;
        }
        if (m[k] % 2 != 0)
        {
            ans++;
        }
        r = max(r, ans);
    }
    cout<<r<<endl;
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