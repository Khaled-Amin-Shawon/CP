#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int ans = INT_MAX;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int temp = v[i] + v[j] + j - i;
                ans = min(temp, ans);
                //cout<<"i= "<<i<<" j= "<<j<<" temp = "<<temp<<" ans= "<<ans<<endl;
            }
        }
        cout << ans << endl;
    }
}