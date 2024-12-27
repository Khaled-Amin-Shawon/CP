#include<bits/stdc++.h>

using namespace std;

void solve()
{
    long long n;
    cin>>n;
    if(n%2==0) cout<<n/2<<endl;
    else cout<<(n+1)/2<<endl;
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