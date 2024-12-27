#include <bits/stdc++.h>
using namespace std;

map<long long, long long> ans;

int main()
{
    long long n, k, mim_ind = 0;
    cin >> n >> k;
    vector<int> v(n);
    long long m = 10e15 + 2;
    long long sum = 0;
    for (long long i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
       // cout << v[i] << " " << sum << " ";
        if (k == 1 && i == 0)
        {
            if (m > v[i])
            {
                m = v[i];
                mim_ind = i;
            }
        }
        if (i == k - 1)
        {
            if (m > sum)
            {
                m = sum;
                mim_ind = i - k + 1;
            }
        }

        if (i - k >= 0)
        {
            sum -= v[i - k];

            if (m > sum)
            {
                m = sum;
                mim_ind = i - k + 1;
            }
           // cout << "next sum " << sum << " ind " << mim_ind << endl;
        }
    }
    cout << mim_ind + 1 << endl;
}