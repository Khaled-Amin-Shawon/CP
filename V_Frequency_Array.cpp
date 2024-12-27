#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    int b[m+1]={0};
    for(int i=1;i<=n;i++)
    {
       b[a[i]]++;
    }
    for(int i=1;i<=m;i++)
    {
        cout<<b[i]<<endl;
    }
}