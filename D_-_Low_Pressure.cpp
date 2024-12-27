#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t, count = 0;
    cin >> t;
    ll array[t + 1] = {0};
    ll n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        for (ll j = 2; j <= t; j++)
        {
            if (j % a == 0)
            {
                // cout<<j<<endl;
                array[j]++;
            }
        }
    }
    for (ll i = 0; i <= t; i++)
    {
        if (array[i] > 0)
        {
            count++;
            // cout<<i<<" ";
        }
    }

    cout << count << endl;
}