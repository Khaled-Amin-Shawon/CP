#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long n, a, b;
    cin >> n >> a >> b;
    if (a * 2 <= b)
    {
        cout << n * a << endl;
    }
    else
    {
        long long k = n / 2, m = n % 2;
        cout << k * b + m * a << endl;
    }
}

int main()
{
    long long n;
    cin >> n;
    while (n--)
    {
        solve();
    }
}