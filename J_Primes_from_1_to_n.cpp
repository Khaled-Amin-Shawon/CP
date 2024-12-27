#include <bits/stdc++.h>
using namespace std;
int prime[10000];
int main()
{
    int n;
    cin >> n;

    for (int i = 2; i <sqrt(n); i++)
    {
        if(!prime[i])
        {
            for(int j=i*i;j<=n;j+=i) prime[j]=1;
        }

    }
    for(int i=2;i<=n;i++)
    {
        if(!prime[i]) cout<<i<<" ";
    }
   
}