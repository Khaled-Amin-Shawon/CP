#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int Big_khaled()
{
    ll num;
    cin >> num;
    ll o = 0, e = 0;
    for (ll i = 0; i < num; i++)
    {
        ll n;
        cin >> n;
        if (n % 2 == 0)
            e++;
        else
            o++;
    }
    ll ans = min(e, o);
    cout << ans << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        Big_khaled();
    }
}