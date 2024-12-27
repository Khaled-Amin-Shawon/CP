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
   map<string,ll>m;
  // m[A]=0;m[B]=0;m[O]=0;m[AB]=0
   ll n;
   cin>>n;
   fr(i,n)
   {
      string k;
      cin>>k;
      m[k]++;
   }
   cout<<m["O"]+max(m["A"],m["B"])+m["AB"]<<endl;
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