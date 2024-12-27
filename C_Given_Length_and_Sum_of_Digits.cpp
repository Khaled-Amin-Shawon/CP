/*#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll m, s, d1, d2, tamp1, tamp2;
    bool ans=false;
    cin >> m >> s;
    double n=pow(10,m-1);
    for (ll i = 1; i <n ; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            ll d = i - j, k=i+j;
            // cout<<i<<" "<<j<<" "<<k<<" "<<d<<endl;
            if ( k==s)
            {
                d1 = i * 10 + j;
                d2 = j * 10 + i;
                tamp1 = max(d1, d2);
                tamp2 = min(d1, d2);
                ans=true;
            }
        }
    }
    if (ans==true)
    {
        cout<<tamp2<<" "<<tamp1<<endl;
    }
    else
    {
        cout<<"-1"<<" "<<"-1"<<endl;
    }
    
    
}
*/
#include <iostream>
using namespace std;

int main()
{
    int m, s, t, i;
    cin >> m >> s;
    string a, b;

    if (s == 0)
    {
        cout << (m == 1 ? "0 0" : "-1 -1") << endl;
        return 0;
    }

    for (i = 0; i < m; i++)
    {
        t = min(s, 9);
        b += t + '0';
        s -= t;
    }

    if (s > 0)
    {
        cout << "-1 -1" << endl;
        return 0;
    }

    for (i = m - 1; i >= 0; i--)
        a += b[i];

    for (i = 0; a[i] == '0'; i++);

    a[i]--, a[0]++;
    cout << a << " " << b << endl;
    return 0;
}

