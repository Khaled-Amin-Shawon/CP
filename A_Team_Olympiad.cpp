#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll num, p = 0, m = 0, s = 0;
    cin >> num;
    ll child[num];
    vector<ll> pro;
    vector<ll> math;
    vector<ll> spo;
    for (ll i = 0; i < num; i++)
    {
        cin >> child[i];
        if (child[i] == 1)
        {
            p++;
            pro.push_back(i);
        }
        else if (child[i] == 2)
        {
            m++;
            math.push_back(i);
        }
        else
        {
            s++;
            spo.push_back(i);
        }
    }
    ll count = 0;
    while (p != 0 && m != 0 && s != 0)
    {
        count++;
        p--;
        m--;
        s--;
    }
    cout << count << endl;
    ll flag = 0;
    for (ll i = 0; i < count; i++)
    {
        cout << pro[i]+1 << " " << math[i]+1 << " " << spo[i]+1 << endl;
    }
}