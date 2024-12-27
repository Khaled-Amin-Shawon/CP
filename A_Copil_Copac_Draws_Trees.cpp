#include <bits/stdc++.h>
using namespace std;
void bigkhaled()
{
    long long n, ans = 0;
    cin >> n;
    vector<long long> vis(n);
    for (long long i = 0; i < n - 1; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        if (vis[v1] == 1)
        {
            continue;
        }
        else
        {
            ans++;
            vis[v1] = 1;
            vis[v2] = 1;
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bigkhaled();
    }
}