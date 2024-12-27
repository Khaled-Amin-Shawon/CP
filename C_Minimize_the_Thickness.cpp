#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void bigKhaled()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll mn = n, s = 0;
    for (int i = 0; i < n - 1; i++)
    {
        s += v[i];
        ll s1 = 0, mx = 0, c = i;
        vector<ll> u;
        u.push_back(i + 1);
        for (int j = i + 1; j < n; j++)
        {
            s1 += v[j];
            if (s == s1)
            {
                u.push_back(j - c);
                c = j;
                s1 = 0;
            }
            else if (s1 > s)
                break;
        }
        if (s1 == 0)
        {
            for (auto it : u)
            {
                mx = max(mx, it);
            }
            mn = min(mn, mx);
        }
    }
    cout << mn << endl;
}

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        bigKhaled();
    }
}
