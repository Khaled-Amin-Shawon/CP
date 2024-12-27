#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long coin,k;
    cin>>coin>>k;
    long long  i=0;
    while (coin>0 && i<k)
    {
        long long  p=pow(2,i);
        coin-=p;
        if (coin<0)
        {
            break;
        }
        
        i++;
    }
    cout<<i<<endl;
    
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}