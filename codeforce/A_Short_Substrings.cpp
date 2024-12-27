#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void bigKhaled()
{
    string s, k;
    cin >> s;
    for (ll i = 0; i < s.length(); i = i + 2)
    {
        k.push_back(s[i]);
    }
    k.push_back(s[s.length() - 1]);
    cout << k << endl;
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