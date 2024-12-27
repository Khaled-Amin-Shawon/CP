#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void Big_Khaled()
{
    ll n;
    cin >> n;
    string str;
    cin >> str;
    ll q = 0;
    for (ll i = 0; i < str.size(); i++)
    {
        if (str[i] == 'Q')
        {
            q++;
        }
        if (q == 0)
        {
            continue;
        }
        else
        {
            if (str[i] == 'A')
            {
                q--;
            }
        }
    }
    if (q <= 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        Big_Khaled();
    }
}