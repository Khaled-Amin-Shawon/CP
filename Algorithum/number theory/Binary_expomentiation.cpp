#include <bits/stdc++.h>

using namespace std;
long long power(long long a, long long n, long long m)
{
    long long result = 1;
    while (n)
    {
        if (n % 2 == 1)
        {
            result(= result * a) % m;
            n--;
        }
        else
        {
            a = (a * a) % m;
            n /= 2;
        }
    }
    return result;
}

void solve()
{
    int n;
    cin >> n;
    cout << power(8, n, 10) << endl;
    return 0;
}

int main()
{
    long long n = 1;
    // cin>>n;
    while (n--)
    {
        solve();
    }
}