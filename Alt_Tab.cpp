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
    ll n;
    cin>>n;
    vector<string>v(n);
    fr(i,n){
        cin>>v[i];
    }
    map<string,bool>m;
    for (ll i = n-1; i >=0; i--)
    {
        if(m[v[i]]){
            continue;
        }
        cout<<v[i][v[i].size()-2]<<v[i][v[i].size()-1];
        m[v[i]]=true;
    }
    
}
int main()
{
    fast;
    ll t=1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    
}