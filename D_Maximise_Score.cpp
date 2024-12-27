/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include<bits/stdc++.h>
#define ll                  long long 
#define no                  cout<<"NO"<<endl;
#define yes                 cout<<"YES"<<endl;
#define fr(i, n)            for(ll i = 0; i < n; i++)
#define fr1(i, n)           for(ll i = 1; i <= n; i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int x[n];
    vector<int> khaled;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int l = -1, r = -1;
    for (int i = 0; i < n; i++)
    {
        if (i - 1 >= 0)
        {
            l = abs(x[i] - x[i - 1]);
        }
        if (i + 1 < n)
        {
            r = abs(x[i] - x[i + 1]);
        }
        khaled.push_back(max(l, r));
    }
    sort(khaled.begin(), khaled.end());
    cout << khaled.front() << endl;
}
int main()
{
    fast;
    ll t=1;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}