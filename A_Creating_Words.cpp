#include<bits/stdc++.h>

using namespace std;

void solve()
{
    string a,b;
    cin>>a>>b;
    char c =a[0];
    a[0]=b[0];
    b[0]=c;
    cout<<a<<" "<<b<<endl;
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