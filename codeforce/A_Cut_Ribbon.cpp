#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c, n, k, ans, rem;
    cin >> n >> a >> b >> c;
    ans = 0;
    for (long long int i = 0; i * a <= n; ++i)
    {
        for (long long j = 0; i * a + j * b <= n; ++j)
        {
            rem = n - i * a - j * b;
            if (rem % c == 0)
            {
                k = rem / c;
                ans = max(ans, i + j + k);
            }
        }
    }
    cout << ans << endl;
    return 0;
}