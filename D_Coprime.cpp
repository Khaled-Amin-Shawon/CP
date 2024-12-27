#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int gcd(int a, int b)
{

    int m = max(a, b);
    int n = min(a, b);
    if (n == 0)
    {
        return m;
    }
    else
    {

        gcd(n, m % n);
    }
}

void bigKhaled()
{
    ll num;
    cin >> num;
    ll a[num];
    ll m = -1;
    for (ll i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    for (ll i = num-1; i >=0; i--)
    {
        for (ll j = i; j >= 0; j--)
        {
            if (a[i] % 2 == 0 && a[j] % 2 == 0)
            {
                continue;
            }
            else
            {

                if (a[i] == 1 || a[j] == 1)
                {
                    m = max(m, (i + j));
                    break;
                }
                else
                {
                    ll k = gcd(a[i], a[j]);
                    if (k == 1)
                    {
                        m = max(m, (i + j));
                        break;
                    }
                }
            }
            
            
            
        }

    }
    if (m == -1)
    {
        cout << m << endl;
    }
    else
    {
        cout << m + 2 << endl;
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