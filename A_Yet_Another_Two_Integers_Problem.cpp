#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void bigKhaled()
{
    ll a, b;
    cin >> a >> b;
    ll m = abs(a - b);
    a = m % 10;
    if (a == 0)
    {
        cout << m / 10 << endl;
    }
    else
    {
        cout << (m / 10) + 1 << endl;
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