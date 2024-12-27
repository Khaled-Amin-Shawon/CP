#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        ll num, count = 0, count0 = 0;
        vector<ll> v;
        cin >> num;
        for (ll i = 0; num > 0; i++)
        {
            ll tamp = num % 10;
            num = num / 10;
            if (tamp > 0)
            {
                count++;

                double ans = pow(10, i);
                v.push_back(tamp * ans);
            }
        }
        cout << count << endl;
        for (ll i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}