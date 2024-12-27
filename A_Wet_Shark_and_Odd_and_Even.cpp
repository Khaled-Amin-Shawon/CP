#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll sum = 0;
    ll mn = INT_MAX;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] < mn && a[i] % 2 != 0)
            mn = a[i];
        sum += a[i];
    }
    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum - mn << endl;
    }
}

