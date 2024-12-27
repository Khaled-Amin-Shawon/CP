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
   ll n,m,h;
   cin>>n>>m>>h;
   vector<ll>car(n);
   vector<ll>out(m);
   fr(i,n) cin>>car[i];
   fr(i,m) {ll x; cin>>x; out[i]=x*h;} 
   sort(car.begin(),car.end());
   sort(out.begin(),out.end());
   ll N=min(n,m);
   ll ans=0;
   while (N--)
   {
      n--; m--;
      ans+=min(car[n],out[m]);  
   }
   cout<<ans<<endl;
   
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