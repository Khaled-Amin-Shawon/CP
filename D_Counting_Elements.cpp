#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int same = 0, ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1])
            same++;
        else if (v[i] + 1 == v[i + 1])
        {
            ans++;
            ans += same;
            same = 0;
        }
        else
        {
            same = 0;
        }
    }
    cout << ans << endl;
}