#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll find(ll n, ll x, ll count)
{
    ll c = n * 2;
    if (x <= c)
    {
        ll s = (c - x) % 2 + (c - x) / 2;
        count += s;
        return count + 1;
    }
    return find(c, x, count + 1);
}
int main()
{
    ll n, x, count = 0;
    cin >> n >> x;
    if (n >= x)
    {
        count = n - x;
        cout << count << endl;
        return 0;
    }
    else
    {
        count = find(n, x, count);
    }
    cout << count << endl;
    return 0;
}