#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void BigKhaled()
{
    ll n;
    string s;
    cin >> n >> s;
    int ans = 0, open = 0, close = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' && s[i + 1] == ')')
        {
            i++;
            continue;
        }
        if (s[i] == '(')
        {
            open++;
        }
        if (s[i] == ')')
        {
            close++;
            if (open < close)
                ans++, close--;
        }
    }
    cout << ans << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        /* Big Khaled code */
        BigKhaled();
    }
}