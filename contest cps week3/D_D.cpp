#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        a[i]=x+y;
    }
    sort(a,a+n);
    cout<<a[n-1]<<endl;
    
}

int main()
{
    long long n=1;
    // cin>>n;
    while (n--)
    {
        solve();
    }
    
}