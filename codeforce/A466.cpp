#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int result=n*a;
    // cout<<result<<endl;
    result=min(result,((n/m)+1)*b);
    int k=n ,i=0;
    k-=m;
    while(k>=0)
    {
        i++;
        result=min(result,k*a+b*i);
        // cout<<k<<" "<<m<<" "<<i<<" = ";
        // cout<<result<<endl;
        k-=m;
    }
    cout<<result<<endl;
    
}