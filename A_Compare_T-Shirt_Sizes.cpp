#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void bigKhaled()
{
    string a, b;
    cin >> a >> b;
    ll ax = 0, bx = 0;
    for (ll i = 0; i < a.size(); i++)
    {
        if (a[i] == 'X')
        {
            ax++;
        }
    }
    for (ll i = 0; i < b.size(); i++)
    {
        if (b[i] == 'X')
        {
            bx++;
        }
    }
    if (a == b)
    {
        cout << "=" << endl;
    }
    else if (a[a.size() - 1] > b[b.size() - 1])
    {
        cout << "<" << endl;
    }
    else if (a[a.size() - 1] < b[b.size() - 1])
    {
        cout << ">" << endl;
    }
    else if (a[a.size() - 1] = b[b.size() - 1])
    {
        if (a[a.size() - 1] == 'S')
        {
            if (ax > bx)
            {
                cout << "<" << endl;
            }
            else
            {
                cout << ">" << endl;
            }
        }
        else
        {
            if (ax > bx)
            {
                cout << ">" << endl;
            }
            else
            {
                cout << "<" << endl;
            }
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