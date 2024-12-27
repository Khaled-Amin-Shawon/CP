#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, ans = 1;
    cin >> n;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (long long i = 0; i < n - 1; i++)
    {
        if (v[i] != v[i + 1])
            ans++;
    }
    cout << ans << endl;
}