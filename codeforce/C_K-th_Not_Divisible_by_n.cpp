#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void Big_Khaled()
{
    ll n,k;
    cin>>n>>k;
    ll div= k/(n-1);
    ll ex=k%(n-1);
    ll ans=n*div+ex;
    if (ex==0)
    {
        ans--;
    }
    cout<<ans<<endl;
    
}
int main()
{
    ll t;
    cin>>t;
    for (ll i = 0; i < t; i++)
    {
        Big_Khaled();
    }
    
}