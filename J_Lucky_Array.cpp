#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int sum = 0;
    while (a[0] == a[sum])
    {
        sum++;
    }
    if (sum % 2)
    {
        cout << "Lucky\n";
    }
    else
        cout << "Unlucky\n";
}