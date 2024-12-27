#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>> n;
    vector< long long >v1(n);
    vector< long long >v2(n);
    for (long long  i = 0; i < n; i++)
    {
        cin>>v1[i]>>v2[i];
    }
    long long maxx= v1[0],minn=v2[0];
    for (long long i = 1; i < n; i++)
    {
        
        maxx=max(maxx,v1[i]);
        minn=min(minn,v2[i]);
        
    }
    cout<<maxx<<" "<<minn<<endl;
     
    
}