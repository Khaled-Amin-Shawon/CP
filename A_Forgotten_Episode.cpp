#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int x[n+1]={0};
    for(int i=1;i<n;i++) cin>>a[i];
    for(int i=1;i<n;i++)
    {
        x[a[i]]++;
    }
    for(int i=1;i<=n+1;i++)
    {
        if(x[i]==0)
        {
            cout<<i<<endl;
            return 0;
        }
    }
}