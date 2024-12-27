#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

void Big_khaled()
{
    ll n, c;
    cin>>n>>c;
    vector<ll>p;
    for (ll i = 0; i < n; i++)
    {
        ll t;
        cin>>t;
        p.push_back(t);
    }
    sort(p.begin(),p.end());
    ll mid=(p.begin()+p.end())/2;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i+1; j < n; j++)
        {
            /* code */
        }
        
    }
    
    
    
}
int main()
{
    int t;
    cin>> t;
    while (t--)
    {
        Big_khaled();
    }
    
}