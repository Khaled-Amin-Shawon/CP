#include<bits/stdc++.h>
using namespace std;
int main()

{
    long long t;
    cin>>t;
    while (t--)
    {
        long long a,b;
        cin>>a>>b;
        long long k=a*b,ac=0;
        while (k!=0)
        {
           k/=10;
           ac++;
        }
        //cout<<ac<<" ";
        if (ac==5)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
        
    }
    
}