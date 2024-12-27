#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  t;
    cin>>t;
    for(long long  i=1;i<=t;i++)
    {
        long long a[3],k;
        for(long long j=0;j<3;j++)
        {
            cin>>a[j];
        }
        cin>>k;
        sort(a,a+3);
        if(((a[0]+a[1]+a[2])%3==0)&& (a[2]-a[1])%k==0 && (a[1]-a[0])%k==0)
        {
            cout<<"Case "<<i<<":"<<" Peaceful"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<":"<<" Fight"<<endl;
        }

    }
}