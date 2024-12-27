#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void bigKhaled()
{
    ll num;
    cin >> num;
    ll ans;
    for (ll i = 2; i < 10e9; i++)
    {
        double k = pow(2, i) - 1;
        ll p=k;
        if (num % p == 0)
        {
            ans = num / k;
            break;
        }
    }
    cout << ans << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        bigKhaled();
    }
}