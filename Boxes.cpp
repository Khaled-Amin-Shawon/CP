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
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if(v.size()==1){
        cout<<1<<endl;
        return;
    }
    sort(v.begin(), v.end());
    ll l = 0, r = n - 2, box = 1;
    priority_queue<ll> pq;
    pq.push(v[n - 1]);
    while (l <= r)
    {
        if (pq.top() >= v[l])
        {
            ll x = pq.top();
            x = x ^ v[l];
            pq.pop();
            pq.push(x);
            l++;
        }
        else
        {
            box++;
            pq.push(v[r]);
            r--;
        }
    }
    cout << box << endl;
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