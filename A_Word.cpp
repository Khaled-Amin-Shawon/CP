/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
using namespace std;
void solve()
{
    string str;
    cin >> str;
    ll up = 0, low = 0;
    for (auto c : str)
    {
        if (isupper(c)) up++;
        else if (islower(c)) low++;
    }
    if (up <= low) {
        for (auto & c : str)
        c=tolower(c);
    }
    else {
        for (auto & c : str)
        c=toupper(c);
    }
    cout << str << endl;
}
int main()
{
    fast;
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}