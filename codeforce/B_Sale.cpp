#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, m;
    cin >> n >> m;
    ll array[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    sort(array, array + n);
    ll sum = 0;
    for (ll i = 0; i < m; i++)
    {
        if(array[i]<0)
        sum += array[i];
    }
    sum = abs(sum);
    cout << sum << endl;
}