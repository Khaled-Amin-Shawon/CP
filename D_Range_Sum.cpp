#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        int ans=0;
        for (int i = n; i <= k; i++)
        {
            ans+=i;
        }
        cout<<ans<<endl;
    }
}