#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k; cin>>n>>k;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);
    long long  sum=0;
    long long mx=0;
    for(int i=0;i<k;i++)
    {

        sum+=a[i];
        if(sum>mx)
        {
            mx=sum;
        }

    }
    cout<<mx;

}