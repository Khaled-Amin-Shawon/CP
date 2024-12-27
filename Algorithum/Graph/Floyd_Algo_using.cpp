/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;
long long dis[510][510];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> dis[i][j];
        }
    }
    vector<long long> deleted(n);
    for (int i = 0; i < n; i++)
    {
        cin >> deleted[i];
    }
    reverse(deleted.begin(), deleted.end());
    vector<long long> ans;
    for (int k = 0; k < n; k++)
    {
        int K_val = deleted[k];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                dis[i][j] = min(dis[i][j], dis[i][K_val] + dis[K_val][j]);
            }
        }
        long long sum = 0;
        for (int i = 0; i <= k; i++)
        {
            for (int j = 0; j <= k; j++)
            {
                sum += dis[deleted[i]][deleted[j]];
            }
        }
        ans.push_back(sum);
    }
    reverse(ans.begin(), ans.end());
    for (auto a : ans)
        cout << a << " ";
}