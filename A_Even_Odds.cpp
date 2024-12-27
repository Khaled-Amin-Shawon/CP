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
    long long n, k;
    cin>>n>>k;
    if(n%2){
        if(k>(n+1)/2)cout<<(k-n/2-1)*2<<endl;
        else cout<<(k-1)*2+1<<endl;
    }
    else{
        if(k>(n/2))cout<<(k-n/2)*2<<endl;
        else cout<<(k-1)*2+1<<endl;
    }
    
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