#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector<ll> a, b;
    ll p = k / 2;
    for (ll i = 0; i < n; i++)
    {
        if (v[i] > p)
            b.push_back(v[i]);
        else
            a.push_back(v[i]);
    }
    bool h = true;
    if (a.size() == 0)
    {
        a.push_back(0);
    }
    if (b.size() == 0)
    {
        b.push_back(0);
    }
    if (b.size() == 1 && n % 2 == 0)
    {
        h = false;
    }

    ll inx1 = 0, inx2 = b.size() - 1, ans = 0;
    while (inx1 < a.size() || inx2 >= 0)
    {
        if (inx1 >= a.size())
        {
            ans++;
            inx2--;
        }
        else if (inx2 < 0)
        {
            ans++;
            inx1 += 2;
        }
        else if (a[inx1] + b[inx2] <= k)
        {
            ans++;
            inx1++;
            inx2--;
        }
        else if (a[inx1] + b[inx2] > k)
        {
            ans++;
            inx2--;
        }
    }
    if (h)
        cout << ans << endl;
    else
        cout << ans - 1 << endl;
}