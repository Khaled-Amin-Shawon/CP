#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll num[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    sort(num, num + n);
    ll day;
    cin >> day;
    for (ll i = 0; i < day; i++)
    {
        ll taka;
        cin >> taka;
        ll count = 0;
        for (ll i = 0; i < n; i++)
        {
            if (taka >= num[i])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout << count << endl;
    }
}