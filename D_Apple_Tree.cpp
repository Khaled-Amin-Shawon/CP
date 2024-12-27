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
const ll N = 1e6 + 10;
vector<ll> g[N];
ll ch[N];
ll n, m, l, r;
void dfs(ll ver, ll par)
{
    if (g[ver].size() == 1 && ver != 1)
        ch[ver] = 1;
    for (auto chil : g[ver])
    {
        if (chil != par)
        {
            dfs(chil, ver);
            ch[ver] += ch[chil];
        }
    }
}
void solve()
{
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        g[i].clear();
        ch[i] = 0;
    }
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> l >> r;
        g[l].push_back(r);
        g[r].push_back(l);
    }
    dfs(1, 0);
    cin >> m;
    while (m--)
    {
        cin >> l >> r;
        cout << ch[l] * ch[r] << endl;
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