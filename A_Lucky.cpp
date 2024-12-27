#include<bits/stdc++.h>

using namespace std;

void solve()
{
    long long n,a=6;
    cin>>n;
    vector<long long> v(6);
    while (a--)
    {
       v[a]=n%10;
       n/=10;
    }
    if((v[0]+v[1]+v[2])==(v[3]+v[4]+v[5])) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return ;
    
}

int main()
{
    long long n;
    cin>>n;
    while (n--)
    {
        solve();
    }
    
}