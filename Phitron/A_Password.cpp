#include <bits/stdc++.h>
using namespace std;
int Big_Khaled(int n)
{
    if (n == 2)
    {
        return 6;
    }
    else
    {
        return 6 * (n - 1) + Big_Khaled(n - 1);
    }
}
void BigKhaled()
{
    long long int n;
    cin >> n;
    long long int ar[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cout << Big_Khaled(10-n) << endl;
}
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        BigKhaled();
    }
}
