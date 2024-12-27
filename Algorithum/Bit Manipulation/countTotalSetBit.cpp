#include <bits/stdc++.h>
using namespace std;

int max2(int n)
{
    int c = 0;
    while ((1 << c) <= n)
    {
        c++;
    }
    return c - 1;
}
int countSetBits(int n)
{
    if (n == 0)
        return 0;
    int x = max2(n);
    int ans = x * (1 << (x - 1)) + (n - (1 << x)) + 1 + countSetBits(n - (1 << x));
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << countSetBits(n) << endl;
    }
    return 0;
}