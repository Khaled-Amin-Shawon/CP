#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void bigKhaled()
{
    ll num;
    cin >> num;
    vector<ll> a;
    if (num == 3)
    {
        cout << "-1" << endl;
    }
    else if (num==5)
    {
        cout<<"5 4 1 2 3"<<endl;
    }
    
    else
    {
        for (ll i = 0; i <= num; i++)
        {
            a.push_back(i);
        }
        ll m = num % 2;
        ll n = num / 2;
        if (m == 0)
        {
            reverse(a.begin(), a.end());
            for (ll i = 0; i < num; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        else
        {
            reverse(a.begin(), a.end());
            ll tamp = a[n - 1];
            a[n - 1] = a[n];
            a[n] = tamp;
            for (ll i = 0; i < num; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
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