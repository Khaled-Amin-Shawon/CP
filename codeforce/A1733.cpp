#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tast;
    cin>>tast;
    for(int t=0; t< tast; t++)
    {
        int n, k;
        cin>>n>>k;
        long long int array[n];
        for (int i = 0; i < n; i++)
        {
            cin>>array[i];
        }
        long long int ans=0;
        for (int i = 0; i < k; i++)
        {
            for (int j = i; j < n; j=j+k)
            {
                array[i]=max(array[i],array[j]);
            }
            ans+=array[i];
            
        }
        cout<<ans<<endl;
    }
}