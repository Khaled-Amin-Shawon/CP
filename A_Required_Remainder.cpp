#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y, n;
    scanf("%d %d %d", &x, &y, &n);
        int cur = n % x;
        if (cur != y) n -= (cur - y + x) % x;
        printf("%d\n", n);
}

int main()
{
    long long n;
    cin>>n;
    while (n--)
    {
        solve();
    }
    
}