#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long res = 0;
        long long p;
        cin >> p;
        for (int i = 1; i <= p; i++)
        {
            long long x;
            cin >> x;
            long long dif = x - i;
            if (res > dif)
                res = res;
            else
                res = dif;
        }
        cout<<res<<endl;
    }
}