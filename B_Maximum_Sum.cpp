#include <bits/stdc++.h>
using namespace std;

long long find_MAX(vector<long long> v, int a, int n, int k)
{
    if (k == 0)
    {
        long long ans = 0;
        for (int i = a; i < n; i++)
        {
            ans += v[i];
        }
        return ans;
    }
    else
    {
        long long a1 = find_MAX(v, a + 2, n, k - 1);
        long long a2 = find_MAX(v, a, n - 1, k - 1);
        return max(a1, a2);
    }
}

void bigKhaled()
{
    int n, k;
    cin >> n >> k;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    long long a1 = find_MAX(v, 0 + 2, n, k - 1);
    long long a2 = find_MAX(v, 0, n - 1, k - 1);
    cout << max(a1, a2) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bigKhaled();
    }
}