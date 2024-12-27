#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    int d;
    if(n%k==0) d=n/k;
    else d=n/k+1;
    int a=0 ;
    for (long long i = 0; i <d; i++)
    {
        long long mx=INT_MAX,j=0;
        while (j<k && a<n)
        {
            long long x;
            cin>>x;
            mx=min(mx,x);
            j++;
            a++;
        }
        cout<<mx<<" ";
    }
    
}