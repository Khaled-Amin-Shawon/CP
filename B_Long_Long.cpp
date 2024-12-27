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
    ll n;
    cin >> n;
    vector<ll> v(n);
    fr(i, n)
    {
        cin >> v[i];
    }
    v.push_back(9);
    ll ans = 0,count=0;
    bool flag=false;
    fr(i, n+1)
    {
        if (v[i]==0)
        {
            continue;
        }
        
        ans+=abs(v[i]);
        if(v[i]<=0)
        {
            flag=true;
        }
        if(flag==true && v[i]>0){
                count++;
                flag=false;
        }
        
    }
    
    cout<<ans-9<<" "<<count<<endl;
}
int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}