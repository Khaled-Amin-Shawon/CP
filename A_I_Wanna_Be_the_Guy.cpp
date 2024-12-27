#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int l;cin >> l;int v[l + 1] = {0};
    int a;cin >> a;
    for (int i = 0; i < a; i++)
    {
        int k; cin >> k; v[k]++;
    }
    int b;cin >> b;
    for (int i = 0; i < b; i++)
    {
        int k;cin >> k;v[k]++;
    }
    for (int i = 1; i < l + 1; i++)
    {
        if (v[i] == 0){cout << "Oh, my keyboard!" << endl;return; }
    }
    cout << "I become the guy." << endl;
}
int main()
{
    long long n = 1;
    // cin>>n;
    while (n--)
    {
        solve();
    }
}