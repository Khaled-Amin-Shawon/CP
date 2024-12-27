#include <bits/stdc++.h>
#define ll long long
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
int main()
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
/*
4 10
4 15
6 10
3 9
1 6
The result is : 30
*/