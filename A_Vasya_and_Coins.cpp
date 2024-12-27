#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int Big_khaled()
{
    ll a, b;
    cin >> a >> b;
    if (a == 0)
    {
        cout << "1" << endl;
    }
    else
    {
        ll ans = 1 + a + b * 2;
        cout << ans << endl;
    }
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