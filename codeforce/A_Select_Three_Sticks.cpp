#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {

        int p;
        cin >> p;
        v.push_back(p);
    }
    sort(v.begin(), v.end());
    int ans = 2147483647;
    for (int i = 1; i < v.size() - 1; i++)
    {
        if ((v[i - 1] == v[i]) && (v[i] == v[i + 1]))
        {
            ans = 0;
            break;
        }
        if (v[i - 1] == v[i])
        {
            ans = min(ans, v[i+1] - v[i]);
        }
        else if (v[i] == v[i + 1])
        {
            ans = min(ans, v[i] - v[i-1]);
        }
        else
        {
            ans = min(ans, (v[i] - v[i - 1]) + (v[i + 1] - v[i]));
        }
    }
    cout << ans << endl;
}
int main()
{
    int tast;
    cin >> tast;
    for (int i = 0; i < tast; i++)
    {
        solve();
    }

    return 0;
}