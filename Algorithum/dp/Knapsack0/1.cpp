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
const ll N=105;
ll wt[N], val[N];

ll dp[N][N];

ll knapsack(ll i, ll w){
    if(w==0) return 0;
    if(i<0) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    ll ans = knapsack(i-1, w);
    if(w-wt[i]>=0) ans = max(ans,knapsack(i-1, w-wt[i])+val[i]);
    return dp[i][w] = ans;
}
void solve()
{
    memset(dp,-1,sizeof(dp));
    ll n,w;
    cin>>n>>w;
    for (ll i = 0; i < n; i++)
    {
        cin>>wt[i]>>val[i];
    }
    cout<<"The result is : "<<knapsack(n-1,w)<<endl;

}
int main()
{
    fast;
    ll t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
}