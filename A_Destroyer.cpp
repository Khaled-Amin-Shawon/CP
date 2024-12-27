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
    ll n;
    cin >> n;
    vector<ll> v(n);
    map<ll, ll> m;
    ll mx = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
        mx = max(mx, v[i]);
    }
    for (ll i = 0; i < mx; i++)
    {
        if (m[i] < m[i + 1])
        {
            cout << "NO" <<endl;;
            return;
        }
    }
    cout<<"YES"<<endl;
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