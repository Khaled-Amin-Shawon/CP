#include<bits/stdc++.h>
using namespace std;
void solve()
{
     int n;
    cin>>n;
    int a[n];
  
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int mn=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<mn)
        {
            mn=a[i];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i]-mn;

    }

    cout<<sum<<endl;
}
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
     solve();
   }
   

}