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
   int x,n,r;
   cin>>x>>n>>r;
   x=x+(r/30);
   if(x%n==0)cout<<x/n<<endl;
   else cout<<(x/n)+1<<endl; 
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