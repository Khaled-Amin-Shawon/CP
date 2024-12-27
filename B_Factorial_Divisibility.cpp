#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int fact(ll n)
{
    if (n == 1)
    {
        return 1;
    }
    else
        return n * fact(n - 1);
}
int main()
{
    ll n, d;
    cin >> n >> d;
    int arr[n];
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += fact(arr[i]);
    }
    ll s = fact(d);
    if (sum % s == 0)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
}