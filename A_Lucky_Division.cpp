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
int v[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
void solve()
{
    int n;
    cin >> n;
    for(int i = 0; i < 14; i++) {
        if(n==v[i]){ cout<<"YES"<<endl; return;}
        if(n%v[i]==0){ cout<<"YES"<<endl; return;}
    }
    cout<<"NO"<<endl;
    return;
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