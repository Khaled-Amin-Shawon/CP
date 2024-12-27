#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
    ll n,k;
    cin>>n>>k;
    ll a[n],count=0;
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
        if (k+a[i]<=5)
        {
           count++;
        }
    }
    cout<<count/3<<endl;
}