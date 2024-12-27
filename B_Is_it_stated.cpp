#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'i' && s[i + 1] == 't')
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    long long n;
    cin >> n;
    while (n--)
    {
        solve();
    }
}