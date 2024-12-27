#include <bits/stdc++.h>
using namespace std;
// dp start
int wt[100000], val[10000];
long long dp[1000][1000];
long long dp_func(int ind, int wt_left)
{
    if (wt_left <= 0)
        return 0;
    if (ind < 0)
        return 0;
    if (wt[ind] > wt_left)
        return dp_func(ind - 1, wt_left);
    if (dp[ind][wt_left] != -1)
        return dp[ind][wt_left];
    // Don't choose
    long long ans = dp_func(ind - 1, wt_left);
    // choose
    ans = max(ans,dp_func(ind - 1, wt_left - wt[ind]) + val[ind]);
    return dp[ind][wt_left] = ans;
}
// dp end
int main()
{
    memset(dp, -1, sizeof(dp));
    int n, w;
    cin >> n >> w;
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i] >> val[i];
    }
    cout << func(n - 1, w) << endl;
}