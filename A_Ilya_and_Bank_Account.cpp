#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll num;
    cin >> num;
    ll ans = num;
    for (int i = 1; i <= 2; i++)
    {
        if (i == 2)
        {
            ll n = num % 10;
            ll tamp = (num / 100) * 10 + n;
            ans = max(ans, tamp);
        }
        else
        {
            ll tamp = (num / 10);
            ans = max(ans, tamp);
        }
    }
    cout << ans << endl;
}