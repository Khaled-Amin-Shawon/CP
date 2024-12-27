/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
using namespace std;

int dp[100][100];

// Function for matrix chain multiplication
int mcm(int* p, int i, int j)
{
  if (i == j)
    return 0;

  if (dp[i][j] != -1)
    return dp[i][j];

  dp[i][j] = INT_MAX;
  for (int k = i; k < j; k++)
  {
    dp[i][j] = min(
      dp[i][j], mcm(p, i, k)
          + mcm(p, k + 1, j)
          + p[i - 1] * p[k] * p[j]);
  }
  return dp[i][j];
}

void solve()
{
  int arr[] = { 1, 2, 3, 4,6 };
  int n = sizeof(arr) / sizeof(arr[0]);
  memset(dp, -1, sizeof(dp));

  cout <<"Minimum number of multiplications is "<< mcm(arr, 1, n-1);
}

int main()
{
    ll t = 1;
    while (t--)
    {
        solve();
    }
}